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

/*
                         Main application
 */
//int SW_Pressed=0;
//int SW_pressed=0;
//TRISBbits.TB0=0xFF;
//TRISBbits.TB0=1;

void SPI_Write(char incoming)
{
    SSPBUF = incoming; //Write the user given data into buffer
}
char data;
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        /*SPI_Write(0x38);
        __delay_ms(300);
        SPI_Write(0x3F);
        __delay_ms(300);
        SPI_Write(0x3A);
        __delay_ms(300);
        
         */
        //test code for debugger//
        /*
        SPI1_Exchange8bit(0x38);
        __delay_ms(300);
        SPI1_Exchange8bit(0x3F);
        __delay_ms(300);
        SPI1_Exchange8bit(0x3A);
        __delay_ms(300);
        SPI1_Exchange8bit(0x3A);
        __delay_ms(300);
        */
    printf("WELCOME TO INNEXIV\n\r");
    __delay_ms(500);
    printf("Press 1,2 or 3\n\r");
    data = EUSART1_Read();
    EUSART1_Write(data);
    printf("\n\r");
    switch(data){
        case'1':
            CS1_SetLow();
            SPI1_Exchange8bit('1');
            CS1_SetHigh();
        break;
        case'2':
            CS1_SetLow();
            SPI1_Exchange8bit('2');
            CS1_SetHigh();
        break;
        case'3':
            CS1_SetLow();
            SPI1_Exchange8bit('3');
            CS1_SetHigh(); 
        break;
        default:
            printf("Wrong key pressed\n\r");
            
    }
        //SW_pressed=;
       /*
        if(button_GetValue()==1){
        __delay_ms(10);    
        if(button_GetValue()==1){ // sw open
            CS1_SetLow();
            SPI1_Exchange8bit('1');
            CS1_SetHigh();
            led1_SetHigh();
            __delay_ms(300);
            led1_SetLow();
        }
        }
        
        if(button_GetValue()==0){
        __delay_ms(10);
        if(button_GetValue()==0){ //sw closed
            CS1_SetLow();
            SPI1_Exchange8bit('0');
            CS1_SetHigh();
            led2_SetHigh();
            __delay_ms(1000);
            led2_SetLow();    
        }
        }
        */
    
      /*  else{
        CS1_SetLow();
        SPI1_Exchange8bit('0');
        CS1_SetHigh();
        led3_SetHigh();
        __delay_ms(1000);
        led3_SetLow();
        }*/
        
        // Add your application code
    }
}
/**
 End of File
*/