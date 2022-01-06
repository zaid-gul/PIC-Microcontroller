#line 1 "C:/Users/ZAID/Documents/MikroC/individual led/individual_led_command.c"
void main()
{
 TRISB=0;
 PORTB.F0=1;
 PORTB.F4=1;
 DELAY_ms(1000);
 PORTB.F0=0;
 PORTB.F4=0;
 DELAY_ms(1000);

 }
