/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC18F46K22
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.05 and above
        MPLAB 	          :  MPLAB X 5.20	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set CS1 aliases
#define CS1_TRIS                 TRISAbits.TRISA5
#define CS1_LAT                  LATAbits.LATA5
#define CS1_PORT                 PORTAbits.RA5
#define CS1_ANS                  ANSELAbits.ANSA5
#define CS1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define CS1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define CS1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define CS1_GetValue()           PORTAbits.RA5
#define CS1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define CS1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define CS1_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define CS1_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set button aliases
#define button_TRIS                 TRISBbits.TRISB0
#define button_LAT                  LATBbits.LATB0
#define button_PORT                 PORTBbits.RB0
#define button_WPU                  WPUBbits.WPUB0
#define button_ANS                  ANSELBbits.ANSB0
#define button_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define button_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define button_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define button_GetValue()           PORTBbits.RB0
#define button_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define button_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define button_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define button_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define button_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define button_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set led1 aliases
#define led1_TRIS                 TRISBbits.TRISB1
#define led1_LAT                  LATBbits.LATB1
#define led1_PORT                 PORTBbits.RB1
#define led1_WPU                  WPUBbits.WPUB1
#define led1_ANS                  ANSELBbits.ANSB1
#define led1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define led1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define led1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define led1_GetValue()           PORTBbits.RB1
#define led1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define led1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define led1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define led1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define led1_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define led1_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set led2 aliases
#define led2_TRIS                 TRISBbits.TRISB2
#define led2_LAT                  LATBbits.LATB2
#define led2_PORT                 PORTBbits.RB2
#define led2_WPU                  WPUBbits.WPUB2
#define led2_ANS                  ANSELBbits.ANSB2
#define led2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define led2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define led2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define led2_GetValue()           PORTBbits.RB2
#define led2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define led2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define led2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define led2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define led2_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define led2_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set led3 aliases
#define led3_TRIS                 TRISBbits.TRISB4
#define led3_LAT                  LATBbits.LATB4
#define led3_PORT                 PORTBbits.RB4
#define led3_WPU                  WPUBbits.WPUB4
#define led3_ANS                  ANSELBbits.ANSB4
#define led3_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define led3_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define led3_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define led3_GetValue()           PORTBbits.RB4
#define led3_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define led3_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define led3_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define led3_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define led3_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define led3_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set SCK1 aliases
#define SCK1_TRIS                 TRISCbits.TRISC3
#define SCK1_LAT                  LATCbits.LATC3
#define SCK1_PORT                 PORTCbits.RC3
#define SCK1_ANS                  ANSELCbits.ANSC3
#define SCK1_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SCK1_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SCK1_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SCK1_GetValue()           PORTCbits.RC3
#define SCK1_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SCK1_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SCK1_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SCK1_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SDI1 aliases
#define SDI1_TRIS                 TRISCbits.TRISC4
#define SDI1_LAT                  LATCbits.LATC4
#define SDI1_PORT                 PORTCbits.RC4
#define SDI1_ANS                  ANSELCbits.ANSC4
#define SDI1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SDI1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SDI1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SDI1_GetValue()           PORTCbits.RC4
#define SDI1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SDI1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SDI1_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define SDI1_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set SDO1 aliases
#define SDO1_TRIS                 TRISCbits.TRISC5
#define SDO1_LAT                  LATCbits.LATC5
#define SDO1_PORT                 PORTCbits.RC5
#define SDO1_ANS                  ANSELCbits.ANSC5
#define SDO1_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define SDO1_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define SDO1_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define SDO1_GetValue()           PORTCbits.RC5
#define SDO1_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define SDO1_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define SDO1_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define SDO1_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/