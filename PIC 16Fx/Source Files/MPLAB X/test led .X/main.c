 

#include <stdio.h>
#include <stdlib.h>
#include<xc.h>
#define _XTAL_FREQ 400000

/*
 * 
 */
void main()
{
    while(1)
    {
    TRISB=0b11111111;
    _delay_ms(100);
    TRISB=0b00000000;
    _delay_ms(100);
    }
    
    

   
}

