//preprocessor directives
#include <xc.h>     //xc8 compiler
#include <stdint.h> //used for uint8_t

//Configuration bits
#pragma config FOSC = HSMP      // Oscillator Selection bits (HS oscillator (medium power 4-16 MHz))
#pragma config WDTEN = ON   // Watchdog Timer Enable bits (WDT is always enabled. SWDTEN bit has no effect)
#pragma config PWRTEN = OFF     // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = OFF // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config MCLRE = EXTMCLR  // MCLR Pin Enable bit (MCLR pin enabled, RE3 input pin disabled)

//External crystal oscillator 16 MHz
#define _XTAL_FREQ 16000000
//LAT register used for output PORT is used for input
#define RS485      LATAbits.LATA0           
#define Relay      LATBbits.LATB0
#define LED        LATBbits.LATB3
//function prototypes
void UART1_Init(void);
void UART1_Write(uint8_t tx_data);
unsigned char UART1_Read(void);
void UART1_tx_string(const char *ptr);

//main function
void main(void) 
{
    unsigned char data;
    TRISBbits.RB0 = 0;
    TRISBbits.RB3 = 0;
    UART1_Init();
    while(1)
    {
      UART1_Write('A');
      __delay_ms(1000);
      data = UART1_Read();
      UART1_Write(data);
      switch (data)
      {
                case'1':
                    Relay = 1;
                    LED = 0;
                    __delay_ms(500);
                    Relay = 0;
                    __delay_ms(500);
                    break;
                case'2':
                    LED = 1;
                    Relay = 0;
                    __delay_ms(500);
                    LED = 0;
                    __delay_ms(500);
                    break;
                default:
                    UART1_tx_string("hello/n/r");
       }
    }     
    
     return;
}

void UART1_Init(void)
{   //Using Baud rate 57600//
    //Using EUSART1//
    BAUDCON1 = 0x08;        //16 bit baud rate generator
    SPBRG1 = 68;            //Writing SPBRG Register (in decimal)
    SPBRGH1 = 1;
    TXSTA1bits.SYNC = 0;    //Setting Asynchronous Mode, ie UART
    TXSTA1bits.TX9 = 0;     //disable 9th bit transmission
    TXSTA1bits.TXEN = 1;    //Enables Transmission
    TXSTA1bits.BRGH = 1;    //high speed baud rate
    RCSTA1bits.SPEN = 1;    //Enables Serial Port
    RCSTA1bits.RX9 = 0;     //disable 9th bit 
    RCSTA1bits.CREN = 1;    //Enables Continuous Reception
    ANSELCbits.ANSC6 = 0;	//disable Analog function on bit 6
    ANSELCbits.ANSC7 = 0;	//disable Analog function on bit 7
    TRISCbits.RC6 = 1;      //set TX1 pin   (according to datasheet)
    TRISCbits.RC7 = 1;      //set RX1 pin   (according to datasheet)
    TRISAbits.RA0 = 0;      //set rs485 pin as output
    
    //interrupts//
    PIR1bits.RCIF = 0;
    PIE1bits.RCIE = 1;
    IPR1bits.RC1IP = 1;
    RCONbits.IPEN = 1;
    INTCONbits.PEIE =1;
}

void UART1_Write(uint8_t tx_data)
{
    RS485 = 1;
    while(PIR1bits.TX1IF == 0); //used for interrupts
    while(TXSTA1bits.TRMT == 0); 
    TXREG1 = tx_data;  
}

unsigned char UART1_Read(void)
{
    RS485 = 0;
    while(PIR1bits.RC1IF == 0);
    return RCREG1;
}

void UART1_tx_string(const char *ptr)
{   
    while(*ptr != 0)
    {
        UART1_Write(*ptr++);
    }
}    