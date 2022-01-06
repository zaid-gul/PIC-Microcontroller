 #include <xc.h>
#include <stdint.h>
#include <stdio.h>
//#include "capsensor.h"
//#include "config.h"
//#include "util.h"

#define SWITCH_OFF  0
#define SWITCH_ON   1

//#pragma config FOSC=INTRCIO, WDTE=OFF, PWRTE=OFF, MCLRE=ON, CP=OFF, \
//                CPD=OFF, BOREN=OFF, IESO=OFF, FCMEN=OFF

#define _XTAL_FREQ 4000000
#define LED         RB4
#define LED_BLUE    0
#define LED_RED     1


#define RELAY1_R    RC7 // relay 1 reset (Hongfa HFE60 2-coil latched)
#define RELAY1_S    RC6 // relay 1 set

#define RELAY2_R    RC2 // relay 2 reset
#define RELAY2_S    RA1 // relay 2 set

// Power up delay: time to charge the cap before the relays can switch for
// the first time. In ms.
#define POWERUP_TIME        2000

// Police lights frequency controls the speed of the powerup light sequence.
// Must be a power of 2 <=128. Hint: 4 in XC8 free mode, 1 in pro mode.
#define POLICE_LIGHTS_FREQ  4

#define CLK_125KHZ() \
    OSCCONbits.IRCF = 0b001;    /* 125 kHz (HFINTOSC) */ \

#define CLK_4MHZ() \
    OSCCONbits.IRCF = 0b110;    /* 4 MHz (default) */ \
    
#define DELAY_125KHZ(x) \
    _delay((unsigned long) ((x)*125/4))

#define DELAY_4MHZ(x) \
    _delay((unsigned long) ((x)*1000))



bit switch_status;


void
switch_preinit()
{
    RELAY1_R = RELAY1_S = 0;
    LED = LED_RED;
    switch_status = SWITCH_OFF;
}

void
switch_init()
{
    // Delay until the cap is charged before we can switch for the first time
    uint16_t t = POWERUP_TIME * 1000UL / 65536;
    uint8_t pwmt = 0;   // time
    uint8_t pwmd = 0;   // duty
    TMR1ON = 0;
    TMR1 = 0;
    TMR1ON = 1;
    while (t) {
        if (pwmt == pwmd || (pwmt ^ pwmd) == 0xff) LED = ~LED;
        if (++pwmt == 0) pwmd += POLICE_LIGHTS_FREQ;
        if (TMR1IF) { 
            t--;
            TMR1IF = 0;
        }
    }
    TMR1ON = 0;
    switch_off();
}


void
switch_toggle()
{
    if (switch_status) {
        switch_off();
    } else {
        switch_on();
    }
}


void
switch_on(void)
{
    switch_status = SWITCH_ON;
    RELAY1_S = 1;
    CLK_125KHZ();
    DELAY_125KHZ(RELAY_OP_TIME);
    RELAY1_S = 0;
    CLK_4MHZ();
    LED = LED_RED;
}

void
switch_off(void)
{
    switch_status = SWITCH_OFF;
    CLK_125KHZ();
    RELAY1_R = 1;
    DELAY_125KHZ(RELAY_OP_TIME);
    RELAY1_R = 0;
    CLK_4MHZ();
    LED = LED_BLUE;
}



 