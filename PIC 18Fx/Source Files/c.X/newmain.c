

#include <stdio.h>
#include <stdlib.h>
#include<PIC18F46K22.h>
/*
 * 
 */
void main() {

UART1_Init(57600); // Initialize UART module at baud rate 19200 bps

Delay_ms(100); // Wait for UART module to stabilize

UART1_Write_Text("Enter Data");

UART1_Write(10);// moving one line forward

UART1_Write(13);// carriage return

while (1) { // loop executed infinite times

if (UART1_Data_Ready()) { // If data is received from PC

data_rd = UART1_Read(); // read the received data

UART1_Write(data_rd);  // send data via UART

}

}

}

