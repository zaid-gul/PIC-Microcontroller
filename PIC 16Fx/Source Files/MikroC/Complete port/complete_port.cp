#line 1 "C:/Users/ZAID/Documents/MikroC/Complete port/complete_port.c"
void main ()
{
 TRISB=0;
 PORTB=0XFF;
 DELAY_ms(1000);
 PORTB=0X00;
 DELAY_ms(1000);
 }
