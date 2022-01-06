
#ifndef BAUDRATE            // if baudrate for RS485 has not been defined in config or main c file. 
    #define BAUDRATE 4800
#endif

#include <18F46K22.h>       // Including Microcontroller specific header file. 
#device ADC=10              // ADC resolution bits setting. 
#FUSES  HSH                 // High speed external oscilator selected
#FUSES  NOPLLEN             // PLL disabled.
#FUSES  WDT32768//WDT4096   // Watchdog prescaler 
#FUSES  NOBROWNOUT//BORV19  // Brown out Disabled. 
#use delay(clock=16000000)  // 16 Mhz clock selected.

#define LED PIN_A5
/*
 * 
 */
int main() {
    set_tris_a(0);
    output_a(0);
    while(1)
    {
    output_toggle(LED);
    delay_ms(500);
    output_toggle(LED);

    }
}

