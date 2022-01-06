#line 1 "C:/Users/ZAID/Documents/MikroC/ODD EVEN  (ALTERNATE)/LED_blinking_EVEN_ODD.c"
 void main()
 {
 TRISB=0X00;
 PORTB=0XAA;
 DELAY_ms(1000);
 PORTB=0X55;
 DELAY_ms(1000);
 }
