#line 1 "C:/Users/ZAID/Documents/MikroC/binary command/binaray_hex.c"
 void main()
 {
 TRISB=0;
 PORTB=0b11001100;
 DELAY_ms(1000);
 PORTB=0X00;
 DELAY_ms(1000);
 }
