/*
 * File:   newmain_M.c
 * Author: Hp
 *
 * Created on August 9, 2019, 3:51 PM
 */


#include <xc.h>
 
#include <stdio.h>
#include <stdlib.h>
#define __XTAL_FREQ 4000000

void interrupt ISR()
{
    if(INTCONbits.INTF==1)
    {
        INTCONbits.INTF=0;
        if(RA2==1)
        {
            PORTB=0;
        }}}
    
void main()
{
    TRISC=0b11111110;
    TRISA=0b00010000;
    unsigned char j;
    
    OPTION_REG =1;
    INTCONbits.INTE=1;
    
    INTCONbits.GIE=1;
    
    for(j=0;j<10;j++)
    {
        RC0=1;
        __delay_ms(100);
        RC0=0;
        __delay_ms(100);
        
        
        
        
        TRISB=0b10010000;
        while(1)
        {
            if(RB4==1)
                RB5=1;
            else
                RB5=0;
    
    }}}
 