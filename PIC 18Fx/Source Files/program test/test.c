

#include<P18F458.h>
void msdelay(unsigned int);
void cmd(void);
void data(void);
#define EN PORTDbits.RD6
#define RW PORTDbits.RD5
#define RS PORTDbits.RD4
#define ldata PORTB
void main (void)
{
while(1)
{
TRISB=0;
TRISD=0;
cmd();
ldata=0X38;
cmd();
ldata=0X0F;
cmd();
ldata=0X01;
cmd();
ldata=0X06;
cmd();
ldata=0X80;
data();
ldata=(' ');
data();
ldata=(' ');
data();
ldata='U';
data();
ldata='E';
data();
ldata='T';
data();
ldata=' ';
data();
ldata='T';
data();
ldata='A';
data();
ldata='X';
data();
ldata='I';
data();
ldata='L';
data();
ldata='A';
data();
ldata=' ';
data();
ldata=0XC0;
cmd();
ldata=' ';
data();
ldata=' ';
data();
ldata='1';
data();
ldata='4';
data();
ldata='-';
data();
ldata='M';
data();
ldata='C';
data();
ldata='T';
data();
ldata='-';
data();
ldata='2';
data();
}
}

void msdelay(unsigned int itime)
{
unsigned int i;
unsigned char j;
for(i=0;i<itime;i++)
for(j=0;j<200;j++);
}

void cmd()
{
RS=0;
RW=0;
EN=1;
msdelay(50);
EN=0;
}

void data()
{
RS=1;
RW=0;
EN=1;
msdelay(50);
EN=0;

}