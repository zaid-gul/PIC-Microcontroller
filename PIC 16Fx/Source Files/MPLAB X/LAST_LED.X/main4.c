/* 
 * File:   main4.c
 * Author: Hp
 *
 * Created on August 9, 2019, 3:49 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#define _XTAL_FREQ 4000000
//#define LED         RB6
//#define LED_BLUE    1
//#define LED_RED     0

 
void main()
{ 
     TRISB4 = 0;  
  TRISC5 = 1; 

  RB4 = 0;  
     
    

  
        while(1)
        {
           // TRISB=0b00000000;
            if(RC5==1)
                RB4=1;
//            __delay_ms(500);
//            RB4=0;
                    
            
//                LED=LED_RED;
               // RC5=1;
            else
                RB4=0;
//                LED=LED_BLUE;
               // RC5=0;
         //   TRISB=0b00000000;
    
    }}
