;  ASM code generated by mikroVirtualMachine for PIC - V. 8.2.0.0
;  Date/Time: 9/2/2016 9:30:38 PM
;  Info: http://www.mikroe.com


; ADDRESS	OPCODE	ASM
; ----------------------------------------------
$0000	$2804			GOTO	_main
$0004	$	_main:
;LED_EVEN_ODD.c,2 :: 		void main()
;LED_EVEN_ODD.c,4 :: 		TRISB = 0;
$0004	$1303			BCF	STATUS, RP1
$0005	$1683			BSF	STATUS, RP0
$0006	$0186			CLRF	TRISB, 1
;LED_EVEN_ODD.c,5 :: 		PORTB=1;
$0007	$3001			MOVLW	1
$0008	$1283			BCF	STATUS, RP0
$0009	$0086			MOVWF	PORTB
;LED_EVEN_ODD.c,6 :: 		PORTB.F0 = 1;
$000A	$1406			BSF	PORTB, 0
;LED_EVEN_ODD.c,7 :: 		PORTB.F2 = 1;
$000B	$1506			BSF	PORTB, 2
;LED_EVEN_ODD.c,8 :: 		PORTB.F4 = 1;
$000C	$1606			BSF	PORTB, 4
;LED_EVEN_ODD.c,9 :: 		PORTB.F6 = 1;
$000D	$1706			BSF	PORTB, 6
;LED_EVEN_ODD.c,10 :: 		PORTB.F1 = 0;
$000E	$1086			BCF	PORTB, 1
;LED_EVEN_ODD.c,11 :: 		PORTB.F3 = 0;
$000F	$1186			BCF	PORTB, 3
;LED_EVEN_ODD.c,12 :: 		PORTB.F5 = 0;
$0010	$1286			BCF	PORTB, 5
;LED_EVEN_ODD.c,13 :: 		PORTB.F7 = 0;
$0011	$1386			BCF	PORTB, 7
;LED_EVEN_ODD.c,14 :: 		Delay_ms(1000);
$0012	$300B			MOVLW	11
$0013	$00FC			MOVWF	STACK_12
$0014	$30FF			MOVLW	255
$0015	$00FB			MOVWF	STACK_11
$0016	$30FF			MOVLW	255
$0017	$00FA			MOVWF	STACK_10
$0018	$0BFC			DECFSZ	STACK_12, F
$0019	$281B			GOTO	$+2
$001A	$2822			GOTO	$+8
$001B	$0BFB			DECFSZ	STACK_11, F
$001C	$281E			GOTO	$+2
$001D	$2821			GOTO	$+4
$001E	$0BFA			DECFSZ	STACK_10, F
$001F	$281E			GOTO	$-1
$0020	$281B			GOTO	$-5
$0021	$2818			GOTO	$-9
$0022	$3033			MOVLW	51
$0023	$00FB			MOVWF	STACK_11
$0024	$30FF			MOVLW	255
$0025	$00FA			MOVWF	STACK_10
$0026	$0BFB			DECFSZ	STACK_11, F
$0027	$2829			GOTO	$+2
$0028	$282C			GOTO	$+4
$0029	$0BFA			DECFSZ	STACK_10, F
$002A	$2829			GOTO	$-1
$002B	$2826			GOTO	$-5
$002C	$3088			MOVLW	136
$002D	$00FA			MOVWF	STACK_10
$002E	$0BFA			DECFSZ	STACK_10, F
$002F	$282E			GOTO	$-1
;LED_EVEN_ODD.c,15 :: 		PORTB.F0 = 0;
$0030	$1006			BCF	PORTB, 0
;LED_EVEN_ODD.c,16 :: 		PORTB.F2 = 0;
$0031	$1106			BCF	PORTB, 2
;LED_EVEN_ODD.c,17 :: 		PORTB.F4 = 0;
$0032	$1206			BCF	PORTB, 4
;LED_EVEN_ODD.c,18 :: 		PORTB.F6 = 0;
$0033	$1306			BCF	PORTB, 6
;LED_EVEN_ODD.c,19 :: 		PORTB.F1 = 1;
$0034	$1486			BSF	PORTB, 1
;LED_EVEN_ODD.c,20 :: 		PORTB.F3 = 1;
$0035	$1586			BSF	PORTB, 3
;LED_EVEN_ODD.c,21 :: 		PORTB.F5 = 1;
$0036	$1686			BSF	PORTB, 5
;LED_EVEN_ODD.c,22 :: 		PORTB.F7 = 1;
$0037	$1786			BSF	PORTB, 7
;LED_EVEN_ODD.c,23 :: 		Delay_ms(1000);
$0038	$300B			MOVLW	11
$0039	$00FC			MOVWF	STACK_12
$003A	$30FF			MOVLW	255
$003B	$00FB			MOVWF	STACK_11
$003C	$30FF			MOVLW	255
$003D	$00FA			MOVWF	STACK_10
$003E	$0BFC			DECFSZ	STACK_12, F
$003F	$2841			GOTO	$+2
$0040	$2848			GOTO	$+8
$0041	$0BFB			DECFSZ	STACK_11, F
$0042	$2844			GOTO	$+2
$0043	$2847			GOTO	$+4
$0044	$0BFA			DECFSZ	STACK_10, F
$0045	$2844			GOTO	$-1
$0046	$2841			GOTO	$-5
$0047	$283E			GOTO	$-9
$0048	$3033			MOVLW	51
$0049	$00FB			MOVWF	STACK_11
$004A	$30FF			MOVLW	255
$004B	$00FA			MOVWF	STACK_10
$004C	$0BFB			DECFSZ	STACK_11, F
$004D	$284F			GOTO	$+2
$004E	$2852			GOTO	$+4
$004F	$0BFA			DECFSZ	STACK_10, F
$0050	$284F			GOTO	$-1
$0051	$284C			GOTO	$-5
$0052	$3088			MOVLW	136
$0053	$00FA			MOVWF	STACK_10
$0054	$0BFA			DECFSZ	STACK_10, F
$0055	$2854			GOTO	$-1
;LED_EVEN_ODD.c,24 :: 		}
$0056	$2856			GOTO	$
