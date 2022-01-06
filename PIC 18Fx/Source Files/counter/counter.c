
#include <P18F458.h>
void T3DELAY();    //function prototype for timer 3
void main(void)
{
   
            TRISB=0;  //used as output
			while(1)
{
			PORTB=0xAA;
			T3DELAY();
			PORTB=0x55;
			T3DELAY();

}

}
void T3DELAY()   //function for delay
{
T3CON=0x00;
TMR3H=0xFE;
TMR3L=0x0C;
T3CONbits.TMR3ON=1;
while(PIR2bits.TMR3IF==0);
T3CONbits.TMR3ON=0;
PIR2bits.TMR3IF=0;
}





