
#include <P18F458.h>
#pragma OSC=HS ,OSCS=OFF
#pragma PWRT=OFF , BOR=OFF
#pragma WDT=OFF , LVP=OFF
#pragma DEBUG=OFF , STVR=OFF
void msdelay(unsigned int);
void main(void)
{
	TRISB=0;   //output
	PORTB=0xAA;  		//program for even odd
	msdelay(250);
	PORTB=0x55;
	msdelay(250);
	
}

	
void msdelay(unsigned int itime)
{
	unsigned int i;	unsigned char j;
	for(i=0 ; i<itime ; i++)
		for(j=0 ; j<165 ; j++);
}