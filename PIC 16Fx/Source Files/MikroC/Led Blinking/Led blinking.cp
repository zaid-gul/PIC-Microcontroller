#line 1 "C:/Users/ZAID/Documents/MikroC/Led Blinking/Led blinking.c"
void main()
{
 TRISB=0;
 PORTB=1;
 DELAY_ms(1000);
 PORTB=0;
 DELAY_ms(1000);

}
