 #include <xc.h>

#pragma config FOSC=INTRCIO, WDTE=OFF, PWRTE=OFF, MCLRE=ON, CP=OFF, \
                CPD=OFF, BOREN=OFF, IESO=OFF, FCMEN=OFF

#define _XTAL_FREQ 4000000

int main()
{
    int result;     //variable to store our ADC result

    TRISA = 0xFF;   //set all digital I/O to inputs
    TRISB = 0xFF;
    TRISC = 0xFF;

    ANSEL = 0x00;   //disable all analog ports
    ANSELH = 0x00;

    TRISAbits.TRISA2 = 1;   //Disable the output driver for pin RA2/AN2
    ANSELbits.ANS2 = 1;     //set RA2/AN2 to analog mode
    TRISBbits.TRISB4 = 0;   //set RB7 as an output


    ///////////////
    // ADC Setup //
    ///////////////
    ADCON0bits.ADFM = 1;        //ADC result is right justified
    ADCON0bits.VCFG = 0;        //Vdd is the +ve reference
    ADCON1bits.ADCS = 0b001;    //Fosc/8 is the conversion clock
                                //This is selected because the conversion
                                //clock period (Tad) must be greater than 1.5us.
                                //With a Fosc of 4MHz, Fosc/8 results in a Tad
                                //of 2us.
    ADCON0bits.CHS = 2;         //select analog input, AN2
    ADCON0bits.ADON = 1;        //Turn on the ADC

	
    ///////////////////////
    // Main Program Loop //
    ///////////////////////
    while(1)
    {
       // __delay_us(5); 
       // printf("sdkjcs");//Wait the acquisition time (about 5us).

  ADCON0bits.GO = 1;          //start the conversion
        while(ADCON0bits.GO==1){};  //wait for the conversion to end
//
        result = (ADRESH<<8)+ADRESL;	//combine the 10 bits of the conversion
//#ifdef DEBUG
//    printf("%c%c%c%c%c%c::::", 
//#endif  
       if(result > 512)
//            printf("sdcs");
       __delay_ms(100);
            PORTBbits.RB4 = 1;      //turn on the LED if the input voltage is above Vdd/2
       // else
            __delay_ms(100);
            PORTBbits.RB4 = 0; 
        //otherwise turn off the LED
       
//#ifdef DEBUG
//       printf("%c%c%c%c%c%c::::", 
//#endif  
    }

    return 0;
}