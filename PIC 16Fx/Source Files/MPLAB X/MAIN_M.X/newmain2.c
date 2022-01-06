/* 
 * File:   newmain2.c
 * Author: Hp
 *
 * Created on August 9, 2019, 3:31 PM
 */

#include <stdio.h>
#include <stdlib.h>

 #include <xc.h>
#define _XTAL_FREQ 4000000
void main(void) {
    TRISB = 0;
//    int i = 0;
    while(1)
    {
        PORTB=0b00000000;
        __dealay_ms(300);
                
//       RB5 = 1;
//       for(i = 1; i< 6000; i++);
//       RB5 = 0;
//       for(i = 1; i< 6000; i++);      
    }
    return;
}
