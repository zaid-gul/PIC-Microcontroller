#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

   ANSELB = 0x00;
   TRISB=0;
   LATBbits.LATB0=0;
   while(1)
   {
   LATBbits.LATB0=~LATBbits.LATB0;
   _delay_ms(200);
   }  
}



