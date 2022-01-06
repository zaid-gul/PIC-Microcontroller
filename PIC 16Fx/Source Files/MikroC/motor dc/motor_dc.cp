#line 1 "D:/SOFTWARE DATA/MikroC/motor dc/motor_dc.c"
 void main()

 { TRISB=0;

 while(1)
 {

 PORTB=0b00000101;
 DELAY_ms(200);
 PORTB=0b00001010;
 DELAY_ms(200);
 }
 }
