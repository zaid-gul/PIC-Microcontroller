 
#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#define __XTAL__FREQ 4000000

void main()
{
    TRISB=0x00;
    while(1)
    {
        
    
    TRISB=0b11111111;
    __delay_ms(100);
    
}
}
 