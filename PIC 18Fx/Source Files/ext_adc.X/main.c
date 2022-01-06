/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC18F46K22
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include "lcd.h"
#include "stdio.h"
/*
                         Main application
 */
#define MCP3221_ADDR  0x9A
// I2C Bus Control Definition
#define I2C_DATA_ACK 0
#define I2C_DATA_NOACK 1
#define I2C_WRITE_CMD 0
#define I2C_READ_CMD 1

#define I2C_START_CMD 0
#define I2C_REP_START_CMD 1
#define I2C_REQ_ACK 0
#define I2C_REQ_NOACK 0
uint32_t converted_Value=0;
//char vol;
double Voltage;
unsigned int val;
char Buffer[20];
//unsigned char tempSign=0;
/*uint32_t adc_ext(void){
    //volatile uint8_t readtemp;
    volatile uint32_t analog_val;
    uint32_t MCP_3421=0;
    I2C1_MESSAGE_STATUS status;
    
    I2C1_MasterWrite(&MCP_3421, 2, I2C_ADDR_ADC, &status);
    while(I2C1_MESSAGE_PENDING==status);
    
    I2C1_MasterRead(&analog_val, 2, I2C_ADDR_ADC, &status);
    while(I2C1_MESSAGE_PENDING==status);
    
}*/
void i2c_idle(void)
{
  // Wait I2C Bus and Status Idle (i.e. ACKEN, RCEN, PEN, RSEN, SEN)
  while (( SSP1CON2 & 0x1F ) || ( SSP1STATbits.R_nW));
}

void i2c_start(unsigned char stype)
{
  i2c_idle();                     // Ensure the I2C module is idle
  if (stype == I2C_START_CMD) {
    SSP1CON2bits.SEN = 1;          // Start I2C Transmission
    while(SSP1CON2bits.SEN);
  } else {
    SSP1CON2bits.RSEN = 1;         // ReStart I2C Transmission
    while(SSP1CON2bits.RSEN);
  }
}

void i2c_stop(void)
{
  // Stop I2C Transmission
  SSP1CON2bits.PEN = 1;
  while(SSP1CON2bits.PEN);
}

unsigned char i2c_slave_ack(void)
{
  // Return: 1 = Acknowledge was not received from slave
  //         0 = Acknowledge was received from slave
  return(SSP1CON2bits.ACKSTAT);
}

void i2c_write(unsigned char data45)
{
  // Send the Data to I2C Bus
  SSP1BUF = data45;
  if (SSP1CON1bits.WCOL)         // Check for write collision
    return;  

  while(SSP1STATbits.BF);        // Wait until write cycle is complete
  i2c_idle();                   // Ensure the I2C module is idle
}

void i2c_master_ack(unsigned char ack_type)
{
  SSP1CON2bits.ACKDT = ack_type;   // 1 = Not Acknowledge, 0 = Acknowledge
  SSP1CON2bits.ACKEN = 1;          // Enable Acknowledge
  while (SSPCON2bits.ACKEN == 1);
}

unsigned char i2c_read(void)
{
  // Ensure the I2C module is idle
  i2c_idle();                         

  // Enable Receive Mode
  SSP1CON2bits.RCEN = 1;           // Enable master for 1 byte reception
  while(!SSP1STATbits.BF);         // Wait until buffer is full
  return(SSP1BUF);
}

unsigned int Read_MCP3221(void)
{
  unsigned int adcdata;
  unsigned char hidata,lodata;

  // Start the I2C Write Transmission
  i2c_start(I2C_START_CMD);    

  // Read MCP3221 I2C ADC Control Byte - Read
  i2c_write(MCP3221_ADDR|I2C_READ_CMD);     

  // Get the High Byte of MCP3221 A/D Conversion
  hidata=i2c_read();

  // Send Acknowledge to the Slave
  i2c_master_ack(I2C_DATA_ACK);  

  // Get the Low Byte of MCP3221 A/D Conversion
  lodata=i2c_read();   

  // Send No Acknowledge to the Slave
  i2c_master_ack(I2C_DATA_NOACK);  

  // Stop I2C Transmission
  i2c_stop();  

  // Return 12-bit ADC Data
  adcdata = lodata;
  adcdata += ((int)hidata) << 8;      

  return(adcdata);
} 

void main(void)
{
    
    // Initialize the device
    SYSTEM_Initialize();
    LCD_Initialize();
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
        LCDPutCmd(LCD_CURSOR_OFF);
        LCDPutStr("ADC Conversion");
        __delay_ms(1000);
        DisplayClr();
        //CS1_SetHigh();
    while (1)
    {
        val=Read_MCP3221();
        //adc_ext();
        //converted_Value=adc_ext();
     
        //CS1_SetLow();
         //SPI1_Exchange8bit(0x0A);
         
        //CS1_SetLow();
       // while (!SSPSTATbits.BF);
       // converted_Value= SSPBUF;
        
        
        Voltage=((val*5.5)/4095);
        LCDPutStr("Voltage= ");
        sprintf(Buffer, " %.3g", Voltage);
        LCDPutStr(Buffer);
        LCDPutStr("  ");
        LCDGoto(0,0); 
        printf("ADC Conversion\n\r");
        printf("Voltage= %f V\n\r", Voltage);
        __delay_ms(500);
        // Add your application code
    }
}
/**
 End of File
*/