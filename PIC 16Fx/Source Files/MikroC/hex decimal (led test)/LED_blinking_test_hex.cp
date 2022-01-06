#line 1 "C:/Users/ZAID/Documents/MikroC/hex decimal (led test)/LED_blinking_test_hex.c"
 void main()
 {
 TRISB=0;
 PORTB=0XFF;
 DELAY_ms(1000);
 PORTB=0X00;
 DELAY_ms(1000);
 }
