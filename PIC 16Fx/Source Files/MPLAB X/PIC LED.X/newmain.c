/* 
 * File:   newmain.c
 * Author: Hp
 *
 * Created on August 7, 2019, 12:43 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#define _XTAL_FREQ 4000000

void main()
{
    TRISB=0x00;
    
    while(1){
        
        PORTB=0b11111111;
        __delay_ms(100);
        
        
        PORTB=0b00000000;
        __delay_ms(100);
        
    }
}