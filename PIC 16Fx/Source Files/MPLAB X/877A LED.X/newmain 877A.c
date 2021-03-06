/*
 * File:   newmain 877A.c
 * Author: Hp
 *
 * Created on August 8, 2019, 12:19 PM
 */

#include <xc.h>
//interrupt service routine
void interrupt ISR() {
    //Check if the interrupt is because of
    //RBO GPIO pin
    if(INTCONbits.INTF == 1) {
        //Clear the interrupt
        INTCONbits.INTF = 0;
        //If the LED is on
        if(PORTBbits.RB1 == 1) {
            //turn off the LED
            PORTBbits.RB1 = 0;
        }
        //If the LED is off
        else {
            //turn on the LED
            PORTBbits.RB1 = 1;
        }
    } 
}
void main() {
    //RB0 as a input
    TRISBbits.TRISB0 = 1;
    //RB1 as a output
    TRISBbits.TRISB1 = 0;
    //RB1 high so LED On
    PORTBbits.RB1 = 1;
    //Enable the Global interrupt
    INTCONbits.GIE = 1;
    //Peripheral Interrupt Enable
    INTCONbits.PEIE =1;
    //enable RB0 interrupt
    INTCONbits.INTE = 1;
    //Loop forever
    while(1);
    return;
}
 