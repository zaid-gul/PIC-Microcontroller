 #include <xc.h>    //Use this to include the device header for your PIC.
#include <stdint.h>
#include <stdio.h>

#define _XTAL_FREQ 4000000  //4MHz, which is default


//set the configuration bits: internal OSC, everything off except MCLR
#pragma config FOSC=INTRCIO, WDTE=OFF, PWRTE=OFF, MCLRE=ON, CP=OFF, \
                CPD=OFF, BOREN=OFF, IESO=OFF, FCMEN=OFF

void interrupt isr()
{
    INTCONbits.T0IF = 0;        //Clear the Timer 0 interrupt flag
    TMR0 = 0;                   //Load a value of 0 into the timer
                                //This is actually not necessary since the
                                //register will be at 0 anyway after rolling
                                //over

    PORTBbits.RB7 = ~PORTBbits.RB7; //Toggle the LED
}

int main()
{
    TRISA = 0xFF;   //set all digital I/O to inputs
    TRISB = 0xFF;
    TRISC = 0xFF;

    ANSEL = 0x00;   //disable all analog ports
    ANSELH = 0x00;

    TRISBbits.TRISB7 = 0;   //set RB7 as an output


    ///////////////////
    // Timer 0 Setup //
    ///////////////////
    OPTION_REGbits.PSA = 0; //Prescaler assigned to Timer 0 (other option is to
                            //the Watchdog timer (WDT))

    OPTION_REGbits.PS = 0b111;  //Set the prescaler to 1:256
    OPTION_REGbits.T0CS = 0;    //Use the instruction clock (Fcy/4) as the timer
                                //clock. Other option is an external oscillator
                                //or clock on the T0CKI pin.

    INTCONbits.T0IF = 0;        //Clear the Timer 0 interrupt flag
    TMR0 = 0;                   //Load a value of 0 into the timer
    INTCONbits.T0IE = 1;        //Enable the Timer 0 interrupt    INTCONbits.GIE = 1;         //Set the Global Interrupt Enable


     
    while(1)
    {
        //We can put any application code we want here. It will simply
        //get interrupted when the timer expires.
    }

    return 0;
}
//So now as soon as the interrupt occurs, the event is handled.

//Another question you may be asking is how to adjust how frequently the timer expires. The answer is in the interrupt service routine:

void interrupt isr()
{
    INTCONbits.T0IF = 0;        //Clear the Timer 0 interrupt flag
    TMR0 = 0;                   //Load a value of 0 into the timer
                                //This is actually not necessary since the
                                //register will be at 0 anyway after rolling
                                //over

    PORTBbits.RB7 = ~PORTBbits.RB7; //Toggle the LED
}