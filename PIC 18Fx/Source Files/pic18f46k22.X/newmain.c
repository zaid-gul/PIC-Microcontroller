//#include"18F46K22.h"
#include <xc.h>
//#include <htc.h>
#include <stdio.h>
#include <stdlib.h>
#include"newxc8_header2.h"
#define LED1 LATBbits.LATB0 
#define LED2 LATBbits.LATB1
#define LED3 LATBbits.LATB2 
/*
 * 
 */
void main(void)
{
   ANSELB = 0x00;
   TRISB=0;
   LED1=0;
   LED2=0;
   LED3=0;
   while(1)
   {
   LED1=~LED1;
   LED2=~LED2;
   LED3=~LED3;
   __delay_ms(1000);
   }  
 
}
