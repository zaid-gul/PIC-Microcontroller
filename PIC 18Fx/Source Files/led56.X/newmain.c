

#include <xc.h>

void main(void) {
    ANSELB=0x00; //declaring as digital port
    TRISB=0x00; //port b is declared as output
    LATBbits.LATB0=0;
            while(1){
            LATBbits.LATB0=~LATBbits.LATB0;
            }

}
