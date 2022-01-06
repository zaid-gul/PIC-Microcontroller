
#include <P18F458.h>
void T1DELAY();    //function prototype for timer 1
void main(void)
{
   
            TRISB=0;  //used as output
			while(1)
{
			PORTB=0xAA;
			T1DELAY();
			PORTB=0x55;
			T1DELAY();

}

}
void T1DELAY()   //function for delay
{
T1CON=0x00;
TMR1H=0xFE;
TMR1L=0x0C;
T1CONbits.TMR1ON=1;
while(PIR1bits.TMR1IF==0);
T1CONbits.TMR1ON=0;
PIR1bits.TMR1IF=0;
}
