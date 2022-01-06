  void main()
  {
    TRISB=0X00;
    PORTB=0XAA;
    DELAY_ms(1000);
    PORTB=0X55;
    DELAY_ms(1000);
    }