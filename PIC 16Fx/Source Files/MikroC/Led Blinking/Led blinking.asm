
_main:

;Led blinking.c,1 :: 		void main()
;Led blinking.c,3 :: 		TRISB=0;
	CLRF       TRISB+0
;Led blinking.c,4 :: 		PORTB=1;
	MOVLW      1
	MOVWF      PORTB+0
;Led blinking.c,5 :: 		DELAY_ms(1000);
	MOVLW      11
	MOVWF      R11+0
	MOVLW      38
	MOVWF      R12+0
	MOVLW      93
	MOVWF      R13+0
L_main0:
	DECFSZ     R13+0, 1
	GOTO       L_main0
	DECFSZ     R12+0, 1
	GOTO       L_main0
	DECFSZ     R11+0, 1
	GOTO       L_main0
	NOP
	NOP
;Led blinking.c,6 :: 		PORTB=0;
	CLRF       PORTB+0
;Led blinking.c,7 :: 		DELAY_ms(1000);
	MOVLW      11
	MOVWF      R11+0
	MOVLW      38
	MOVWF      R12+0
	MOVLW      93
	MOVWF      R13+0
L_main1:
	DECFSZ     R13+0, 1
	GOTO       L_main1
	DECFSZ     R12+0, 1
	GOTO       L_main1
	DECFSZ     R11+0, 1
	GOTO       L_main1
	NOP
	NOP
;Led blinking.c,9 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
