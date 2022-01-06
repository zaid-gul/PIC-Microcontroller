#include <xc.h>
#include <stdint.h>
#include <stdio.h>
#define _XTAL_FREQ 4000000
#define LED RB4
#define READS_TO_SWITCH     0x50//2

uint8_t counter = 0;
uint16_t cap_rolling_avg = 0;

#define CAPSENSOR_START_INT() \
    TMR1    = 128; /* Reset T0. Increment will be inhibited for 2 instructions */ \
    T0IF    = 0; /* clear interrupt flag */ \
    T0IE    = 1; /* Enables the Timer0 interrupt */ \
    GIE     = 1; /* Enables all unmasked interrupts */ \
    C1VREN  = 1; /* CVREF circuit powered on and routed to C1VREF input of Comparator C1 */ \
    C1ON    = 1; /* Comparator C1 is enabled */ \
    C2ON    = 1; /* Comparator C2 is enabled */ \
    TMR0    = 0; /* Reset T1 */ \
    TMR1ON  = 1; /* Start T1 */ 
 


void capsensor_init(void)
{
    VRCON   = 0b00011100; 
    SRCON   = 0b10110000;
   
 TRISA=0xFF;
 TRISB=0x00;
    
    CM1CON0 = 0b00010101;
    CM2CON0 = 0b00100101;
    OPTION_REG = 0b00000111 | (OPTION_REG & 0b11110000U);
    
 //   CAPSENSOR_START_INT();
}

void main()
{
    TRISA   = 0b11011100;
    // RA0 (19) -------0 <--> JP1-B7, ??? [4 ms high-Z pulse on start, then 0v]
    // RA1 (18) ------0- ---> JP1-A6 ---> RELAY1-S
    // RA2 (17) -----1-- <--- RC4 (6) C2OUT (T0CKI from relaxation osc)
    // RA3 ( 4) ----1--- MCLR only [high-Z]
    // RA4 ( 3) ---1---- <--- JP1-A3 <--- AC POWER HEARTBEAT
    // RA5 ( 2) --0----- ---> JP1-A1 ---> R23 --> 2-way COM TX [3v when red, 0v when blue]
    // unimpl   xx------
    
    TRISB   = 0b00101111;
    // unimpl   ----xxxx
    // RB4 (13) ---0---- ---> JP1-B3 ---> RF5 External feedback OUT (or soft-uart TX)
    // RB5 (12) --1----- <--- JP1-B4 <--- RF4 External feedback IN
    // RB6 (11) -0------ ---> LED1 (0=blue, 1=red)
    // RB7 (10) 0------- <--- JP1-A2 <--- R24 <--- 2-way COM RX (out if unpopulated to save power)
    
    TRISC   = 0b00001010;
    // RC0 (16) -------0 ---> JP1-A4 ---> BUZZER (if any) [4 ms high-Z pulse on start, then 0v]
    // RC1 (15) ------1- C12IN1- (negative feedback of C2), CAP READ 2 (2-gang only)
    // RC2 (14) -----0-- ---> JP1-A5 ---> RELAY2-S (2-gang only)
    // RC3 ( 7) ----1--- C12IN3- (negative feedback of C2), CAP READ 1
    // RC4 ( 6) ---0---- C2OUT
    // RC5 ( 5) --0----- ---> LED2 (0=blue, 1=red) (2-gang only)
    // RC6 ( 8) -0------ ---> JP1-B5 ---> RELAY2-R (2-gang only)
    // RC7 ( 9) 0------- ---> JP1-B6 ---> RELAY1-R

    // All pins digital
    ANSEL   = 0b00000000;
    ANSELH  = 0b00000000;

    // Pull-ups
    WPUA    = 0b00000000;
    // RA0 (19) -------0
    // RA1 (18) ------0-
    // RA2 (17) -----0--
    // RA4 ( 3) ---0----
    // RA5 ( 2) --0-----
    // unimpl   xx--x---

    WPUB    = 0b00100000;
    // unimpl   ----xxxx
    // RB4 (13) ---0----
    // RB5 (12) --1----- yes
    // RB6 (11) -0------
    // RB7 (10) 0-------
    
    nRABPU  = 0; // PORTA/PORTB pull-ups are enabled by individual PORT latch values
            
    // Initial pin values
    PORTA   = 0b00000000;
    PORTB   = 0b00000000;
    PORTC   = 0b00000000;
//    printf("Init\r\n");
//    while(1){LED=~LED;}
    // Wait until osc is stable
    while (HTS == 0) ;
    
    capsensor_init();
   // cap_rolling_avg = 0;
    CAPSENSOR_START_INT();
    while(1)
    {
         if(TMR1H >= READS_TO_SWITCH)
        LED=1;
         else
        LED=0;  
         
          putch(TMR1H);putch(TMR1L);
    
    T0IF = 0;    
    TMR1    = 0; /* Reset T1 */ 
    TMR1ON  = 1; /* Start T1 */  
    
    }
}
    
//    TRISB=0x00;
//    while(1)
//    {
//        RB4=1;
//       __delay_ms(100);
//       RB4=0;
//        __delay_ms(100);
// }       
//        
//        if(TMR0==1)
//            RB4=1;
//        __delay_ms(100);
//            RB4=0;
//    }
//}
//          void     
//           capsensor_init();
//                   
//    while(1)
//  {
//        TRISB=0b00000000;
//        __delay_ms(100);
// TRISB=0b11111111;
//        
//        __delay_ms(100);
//        }}
//        if( RA2==1 & RC1==1)
//        
//            RB4=1;
//        
//        
//        else
//            RB4=0;
        
//        

        
//        
//    TRISB=0b00000000;
//    __delay_ms(200);
//    
//    
//    TRISB=0b11111111;
//    __delay_ms(200);
//    
    // }}