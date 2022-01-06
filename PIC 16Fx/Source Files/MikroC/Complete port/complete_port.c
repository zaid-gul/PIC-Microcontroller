void main ()
{
     TRISB=0;
     PORTB=0XFF;
     DELAY_ms(1000);
     PORTB=0X00;
     DELAY_ms(1000);
     }