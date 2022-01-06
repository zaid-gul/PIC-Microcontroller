
#include <P18F458.h>
void main(void)
{

unsigned int z;
TRISB=0;
while(1)
{
for(z=0;z<10000;z++)
{
PORTB=0xAA;
PORTB=0x55;
}
}
}