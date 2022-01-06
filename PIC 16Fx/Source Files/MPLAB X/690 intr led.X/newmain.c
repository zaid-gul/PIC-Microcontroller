#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#define __XTAL_FREQ 4000000


 void interrupt ISR()
 {
     
     if(INTCONbits.INTF == 1) {
////        //Clear the interrupt
        INTCONbits.INTF = 0;
  if(RA2 == 1 ){
    PORTB = 0 ;
  }
     }}

void main() {
   

  TRISC = 0b11111110 ;
  TRISA = 0b00010000 ;
  
  OPTION_REG = 1 ;
  INTCONbits.INTE = 1 ;
  INTCONbits.GIE= 1 ;

  //for ( j=0 ; j<10 ; j++ ){
  while(1)
  {
    RC0 = 1 ;
    __delay_ms (500) ;
    RC0 = 0 ;
    __delay_ms (500) ;
  }
//  ANSELH.ANS2 = 0 ;
//  ANSELH.ANS10 = 0 ;
//  ANSELH.ANS11 = 0 ;
  TRISB = 0b10010000;

  while (1)
  {
    if (RB4 == 1 )
      RB5 = 1 ;
    else
      RB5 = 0 ;
  }
}