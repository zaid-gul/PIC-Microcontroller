;  ASM code generated by mikroVirtualMachine for PIC - V. 8.2.0.0
;  Date/Time: 9/6/2016 10:42:58 AM
;  Info: http://www.mikroe.com


; ADDRESS	OPCODE	ASM
; ----------------------------------------------
$0000	$2804			GOTO	_main
$0004	$	_main:
;LED_blinking_in_line.c,1 :: 		void main()
;LED_blinking_in_line.c,3 :: 		TRISB=0X00;
$0004	$1303			BCF	STATUS, RP1
$0005	$1683			BSF	STATUS, RP0
$0006	$0186			CLRF	TRISB, 1
;LED_blinking_in_line.c,4 :: 		PORTB=1;
$0007	$3001			MOVLW	1
$0008	$1283			BCF	STATUS, RP0
$0009	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,5 :: 		DELAY_ms(100);
$000A	$3002			MOVLW	2
$000B	$00FC			MOVWF	STACK_12
$000C	$30FF			MOVLW	255
$000D	$00FB			MOVWF	STACK_11
$000E	$30FF			MOVLW	255
$000F	$00FA			MOVWF	STACK_10
$0010	$0BFC			DECFSZ	STACK_12, F
$0011	$2813			GOTO	$+2
$0012	$281A			GOTO	$+8
$0013	$0BFB			DECFSZ	STACK_11, F
$0014	$2816			GOTO	$+2
$0015	$2819			GOTO	$+4
$0016	$0BFA			DECFSZ	STACK_10, F
$0017	$2816			GOTO	$-1
$0018	$2813			GOTO	$-5
$0019	$2810			GOTO	$-9
$001A	$3006			MOVLW	6
$001B	$00FB			MOVWF	STACK_11
$001C	$30FF			MOVLW	255
$001D	$00FA			MOVWF	STACK_10
$001E	$0BFB			DECFSZ	STACK_11, F
$001F	$2821			GOTO	$+2
$0020	$2824			GOTO	$+4
$0021	$0BFA			DECFSZ	STACK_10, F
$0022	$2821			GOTO	$-1
$0023	$281E			GOTO	$-5
$0024	$300A			MOVLW	10
$0025	$00FA			MOVWF	STACK_10
$0026	$0BFA			DECFSZ	STACK_10, F
$0027	$2826			GOTO	$-1
;LED_blinking_in_line.c,6 :: 		PORTB=2;
$0028	$3002			MOVLW	2
$0029	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,7 :: 		DELAY_ms(100);
$002A	$3002			MOVLW	2
$002B	$00FC			MOVWF	STACK_12
$002C	$30FF			MOVLW	255
$002D	$00FB			MOVWF	STACK_11
$002E	$30FF			MOVLW	255
$002F	$00FA			MOVWF	STACK_10
$0030	$0BFC			DECFSZ	STACK_12, F
$0031	$2833			GOTO	$+2
$0032	$283A			GOTO	$+8
$0033	$0BFB			DECFSZ	STACK_11, F
$0034	$2836			GOTO	$+2
$0035	$2839			GOTO	$+4
$0036	$0BFA			DECFSZ	STACK_10, F
$0037	$2836			GOTO	$-1
$0038	$2833			GOTO	$-5
$0039	$2830			GOTO	$-9
$003A	$3006			MOVLW	6
$003B	$00FB			MOVWF	STACK_11
$003C	$30FF			MOVLW	255
$003D	$00FA			MOVWF	STACK_10
$003E	$0BFB			DECFSZ	STACK_11, F
$003F	$2841			GOTO	$+2
$0040	$2844			GOTO	$+4
$0041	$0BFA			DECFSZ	STACK_10, F
$0042	$2841			GOTO	$-1
$0043	$283E			GOTO	$-5
$0044	$300A			MOVLW	10
$0045	$00FA			MOVWF	STACK_10
$0046	$0BFA			DECFSZ	STACK_10, F
$0047	$2846			GOTO	$-1
;LED_blinking_in_line.c,8 :: 		PORTB=4;
$0048	$3004			MOVLW	4
$0049	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,9 :: 		DELAY_ms(100);
$004A	$3002			MOVLW	2
$004B	$00FC			MOVWF	STACK_12
$004C	$30FF			MOVLW	255
$004D	$00FB			MOVWF	STACK_11
$004E	$30FF			MOVLW	255
$004F	$00FA			MOVWF	STACK_10
$0050	$0BFC			DECFSZ	STACK_12, F
$0051	$2853			GOTO	$+2
$0052	$285A			GOTO	$+8
$0053	$0BFB			DECFSZ	STACK_11, F
$0054	$2856			GOTO	$+2
$0055	$2859			GOTO	$+4
$0056	$0BFA			DECFSZ	STACK_10, F
$0057	$2856			GOTO	$-1
$0058	$2853			GOTO	$-5
$0059	$2850			GOTO	$-9
$005A	$3006			MOVLW	6
$005B	$00FB			MOVWF	STACK_11
$005C	$30FF			MOVLW	255
$005D	$00FA			MOVWF	STACK_10
$005E	$0BFB			DECFSZ	STACK_11, F
$005F	$2861			GOTO	$+2
$0060	$2864			GOTO	$+4
$0061	$0BFA			DECFSZ	STACK_10, F
$0062	$2861			GOTO	$-1
$0063	$285E			GOTO	$-5
$0064	$300A			MOVLW	10
$0065	$00FA			MOVWF	STACK_10
$0066	$0BFA			DECFSZ	STACK_10, F
$0067	$2866			GOTO	$-1
;LED_blinking_in_line.c,10 :: 		PORTB=8;
$0068	$3008			MOVLW	8
$0069	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,11 :: 		DELAY_ms(100);
$006A	$3002			MOVLW	2
$006B	$00FC			MOVWF	STACK_12
$006C	$30FF			MOVLW	255
$006D	$00FB			MOVWF	STACK_11
$006E	$30FF			MOVLW	255
$006F	$00FA			MOVWF	STACK_10
$0070	$0BFC			DECFSZ	STACK_12, F
$0071	$2873			GOTO	$+2
$0072	$287A			GOTO	$+8
$0073	$0BFB			DECFSZ	STACK_11, F
$0074	$2876			GOTO	$+2
$0075	$2879			GOTO	$+4
$0076	$0BFA			DECFSZ	STACK_10, F
$0077	$2876			GOTO	$-1
$0078	$2873			GOTO	$-5
$0079	$2870			GOTO	$-9
$007A	$3006			MOVLW	6
$007B	$00FB			MOVWF	STACK_11
$007C	$30FF			MOVLW	255
$007D	$00FA			MOVWF	STACK_10
$007E	$0BFB			DECFSZ	STACK_11, F
$007F	$2881			GOTO	$+2
$0080	$2884			GOTO	$+4
$0081	$0BFA			DECFSZ	STACK_10, F
$0082	$2881			GOTO	$-1
$0083	$287E			GOTO	$-5
$0084	$300A			MOVLW	10
$0085	$00FA			MOVWF	STACK_10
$0086	$0BFA			DECFSZ	STACK_10, F
$0087	$2886			GOTO	$-1
;LED_blinking_in_line.c,12 :: 		PORTB=16;
$0088	$3010			MOVLW	16
$0089	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,13 :: 		DELAY_ms(100);
$008A	$3002			MOVLW	2
$008B	$00FC			MOVWF	STACK_12
$008C	$30FF			MOVLW	255
$008D	$00FB			MOVWF	STACK_11
$008E	$30FF			MOVLW	255
$008F	$00FA			MOVWF	STACK_10
$0090	$0BFC			DECFSZ	STACK_12, F
$0091	$2893			GOTO	$+2
$0092	$289A			GOTO	$+8
$0093	$0BFB			DECFSZ	STACK_11, F
$0094	$2896			GOTO	$+2
$0095	$2899			GOTO	$+4
$0096	$0BFA			DECFSZ	STACK_10, F
$0097	$2896			GOTO	$-1
$0098	$2893			GOTO	$-5
$0099	$2890			GOTO	$-9
$009A	$3006			MOVLW	6
$009B	$00FB			MOVWF	STACK_11
$009C	$30FF			MOVLW	255
$009D	$00FA			MOVWF	STACK_10
$009E	$0BFB			DECFSZ	STACK_11, F
$009F	$28A1			GOTO	$+2
$00A0	$28A4			GOTO	$+4
$00A1	$0BFA			DECFSZ	STACK_10, F
$00A2	$28A1			GOTO	$-1
$00A3	$289E			GOTO	$-5
$00A4	$300A			MOVLW	10
$00A5	$00FA			MOVWF	STACK_10
$00A6	$0BFA			DECFSZ	STACK_10, F
$00A7	$28A6			GOTO	$-1
;LED_blinking_in_line.c,14 :: 		PORTB=32;
$00A8	$3020			MOVLW	32
$00A9	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,15 :: 		DELAY_ms(100);
$00AA	$3002			MOVLW	2
$00AB	$00FC			MOVWF	STACK_12
$00AC	$30FF			MOVLW	255
$00AD	$00FB			MOVWF	STACK_11
$00AE	$30FF			MOVLW	255
$00AF	$00FA			MOVWF	STACK_10
$00B0	$0BFC			DECFSZ	STACK_12, F
$00B1	$28B3			GOTO	$+2
$00B2	$28BA			GOTO	$+8
$00B3	$0BFB			DECFSZ	STACK_11, F
$00B4	$28B6			GOTO	$+2
$00B5	$28B9			GOTO	$+4
$00B6	$0BFA			DECFSZ	STACK_10, F
$00B7	$28B6			GOTO	$-1
$00B8	$28B3			GOTO	$-5
$00B9	$28B0			GOTO	$-9
$00BA	$3006			MOVLW	6
$00BB	$00FB			MOVWF	STACK_11
$00BC	$30FF			MOVLW	255
$00BD	$00FA			MOVWF	STACK_10
$00BE	$0BFB			DECFSZ	STACK_11, F
$00BF	$28C1			GOTO	$+2
$00C0	$28C4			GOTO	$+4
$00C1	$0BFA			DECFSZ	STACK_10, F
$00C2	$28C1			GOTO	$-1
$00C3	$28BE			GOTO	$-5
$00C4	$300A			MOVLW	10
$00C5	$00FA			MOVWF	STACK_10
$00C6	$0BFA			DECFSZ	STACK_10, F
$00C7	$28C6			GOTO	$-1
;LED_blinking_in_line.c,16 :: 		PORTB=64;
$00C8	$3040			MOVLW	64
$00C9	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,17 :: 		DELAY_ms(100);
$00CA	$3002			MOVLW	2
$00CB	$00FC			MOVWF	STACK_12
$00CC	$30FF			MOVLW	255
$00CD	$00FB			MOVWF	STACK_11
$00CE	$30FF			MOVLW	255
$00CF	$00FA			MOVWF	STACK_10
$00D0	$0BFC			DECFSZ	STACK_12, F
$00D1	$28D3			GOTO	$+2
$00D2	$28DA			GOTO	$+8
$00D3	$0BFB			DECFSZ	STACK_11, F
$00D4	$28D6			GOTO	$+2
$00D5	$28D9			GOTO	$+4
$00D6	$0BFA			DECFSZ	STACK_10, F
$00D7	$28D6			GOTO	$-1
$00D8	$28D3			GOTO	$-5
$00D9	$28D0			GOTO	$-9
$00DA	$3006			MOVLW	6
$00DB	$00FB			MOVWF	STACK_11
$00DC	$30FF			MOVLW	255
$00DD	$00FA			MOVWF	STACK_10
$00DE	$0BFB			DECFSZ	STACK_11, F
$00DF	$28E1			GOTO	$+2
$00E0	$28E4			GOTO	$+4
$00E1	$0BFA			DECFSZ	STACK_10, F
$00E2	$28E1			GOTO	$-1
$00E3	$28DE			GOTO	$-5
$00E4	$300A			MOVLW	10
$00E5	$00FA			MOVWF	STACK_10
$00E6	$0BFA			DECFSZ	STACK_10, F
$00E7	$28E6			GOTO	$-1
;LED_blinking_in_line.c,18 :: 		PORTB=128;
$00E8	$3080			MOVLW	128
$00E9	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,19 :: 		DELAY_ms(100);
$00EA	$3002			MOVLW	2
$00EB	$00FC			MOVWF	STACK_12
$00EC	$30FF			MOVLW	255
$00ED	$00FB			MOVWF	STACK_11
$00EE	$30FF			MOVLW	255
$00EF	$00FA			MOVWF	STACK_10
$00F0	$0BFC			DECFSZ	STACK_12, F
$00F1	$28F3			GOTO	$+2
$00F2	$28FA			GOTO	$+8
$00F3	$0BFB			DECFSZ	STACK_11, F
$00F4	$28F6			GOTO	$+2
$00F5	$28F9			GOTO	$+4
$00F6	$0BFA			DECFSZ	STACK_10, F
$00F7	$28F6			GOTO	$-1
$00F8	$28F3			GOTO	$-5
$00F9	$28F0			GOTO	$-9
$00FA	$3006			MOVLW	6
$00FB	$00FB			MOVWF	STACK_11
$00FC	$30FF			MOVLW	255
$00FD	$00FA			MOVWF	STACK_10
$00FE	$0BFB			DECFSZ	STACK_11, F
$00FF	$2901			GOTO	$+2
$0100	$2904			GOTO	$+4
$0101	$0BFA			DECFSZ	STACK_10, F
$0102	$2901			GOTO	$-1
$0103	$28FE			GOTO	$-5
$0104	$300A			MOVLW	10
$0105	$00FA			MOVWF	STACK_10
$0106	$0BFA			DECFSZ	STACK_10, F
$0107	$2906			GOTO	$-1
;LED_blinking_in_line.c,20 :: 		PORTB=64;
$0108	$3040			MOVLW	64
$0109	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,21 :: 		DELAY_ms(100);
$010A	$3002			MOVLW	2
$010B	$00FC			MOVWF	STACK_12
$010C	$30FF			MOVLW	255
$010D	$00FB			MOVWF	STACK_11
$010E	$30FF			MOVLW	255
$010F	$00FA			MOVWF	STACK_10
$0110	$0BFC			DECFSZ	STACK_12, F
$0111	$2913			GOTO	$+2
$0112	$291A			GOTO	$+8
$0113	$0BFB			DECFSZ	STACK_11, F
$0114	$2916			GOTO	$+2
$0115	$2919			GOTO	$+4
$0116	$0BFA			DECFSZ	STACK_10, F
$0117	$2916			GOTO	$-1
$0118	$2913			GOTO	$-5
$0119	$2910			GOTO	$-9
$011A	$3006			MOVLW	6
$011B	$00FB			MOVWF	STACK_11
$011C	$30FF			MOVLW	255
$011D	$00FA			MOVWF	STACK_10
$011E	$0BFB			DECFSZ	STACK_11, F
$011F	$2921			GOTO	$+2
$0120	$2924			GOTO	$+4
$0121	$0BFA			DECFSZ	STACK_10, F
$0122	$2921			GOTO	$-1
$0123	$291E			GOTO	$-5
$0124	$300A			MOVLW	10
$0125	$00FA			MOVWF	STACK_10
$0126	$0BFA			DECFSZ	STACK_10, F
$0127	$2926			GOTO	$-1
;LED_blinking_in_line.c,22 :: 		PORTB=32;
$0128	$3020			MOVLW	32
$0129	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,23 :: 		DELAY_ms(100);
$012A	$3002			MOVLW	2
$012B	$00FC			MOVWF	STACK_12
$012C	$30FF			MOVLW	255
$012D	$00FB			MOVWF	STACK_11
$012E	$30FF			MOVLW	255
$012F	$00FA			MOVWF	STACK_10
$0130	$0BFC			DECFSZ	STACK_12, F
$0131	$2933			GOTO	$+2
$0132	$293A			GOTO	$+8
$0133	$0BFB			DECFSZ	STACK_11, F
$0134	$2936			GOTO	$+2
$0135	$2939			GOTO	$+4
$0136	$0BFA			DECFSZ	STACK_10, F
$0137	$2936			GOTO	$-1
$0138	$2933			GOTO	$-5
$0139	$2930			GOTO	$-9
$013A	$3006			MOVLW	6
$013B	$00FB			MOVWF	STACK_11
$013C	$30FF			MOVLW	255
$013D	$00FA			MOVWF	STACK_10
$013E	$0BFB			DECFSZ	STACK_11, F
$013F	$2941			GOTO	$+2
$0140	$2944			GOTO	$+4
$0141	$0BFA			DECFSZ	STACK_10, F
$0142	$2941			GOTO	$-1
$0143	$293E			GOTO	$-5
$0144	$300A			MOVLW	10
$0145	$00FA			MOVWF	STACK_10
$0146	$0BFA			DECFSZ	STACK_10, F
$0147	$2946			GOTO	$-1
;LED_blinking_in_line.c,24 :: 		PORTB=16;
$0148	$3010			MOVLW	16
$0149	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,25 :: 		DELAY_ms(100);
$014A	$3002			MOVLW	2
$014B	$00FC			MOVWF	STACK_12
$014C	$30FF			MOVLW	255
$014D	$00FB			MOVWF	STACK_11
$014E	$30FF			MOVLW	255
$014F	$00FA			MOVWF	STACK_10
$0150	$0BFC			DECFSZ	STACK_12, F
$0151	$2953			GOTO	$+2
$0152	$295A			GOTO	$+8
$0153	$0BFB			DECFSZ	STACK_11, F
$0154	$2956			GOTO	$+2
$0155	$2959			GOTO	$+4
$0156	$0BFA			DECFSZ	STACK_10, F
$0157	$2956			GOTO	$-1
$0158	$2953			GOTO	$-5
$0159	$2950			GOTO	$-9
$015A	$3006			MOVLW	6
$015B	$00FB			MOVWF	STACK_11
$015C	$30FF			MOVLW	255
$015D	$00FA			MOVWF	STACK_10
$015E	$0BFB			DECFSZ	STACK_11, F
$015F	$2961			GOTO	$+2
$0160	$2964			GOTO	$+4
$0161	$0BFA			DECFSZ	STACK_10, F
$0162	$2961			GOTO	$-1
$0163	$295E			GOTO	$-5
$0164	$300A			MOVLW	10
$0165	$00FA			MOVWF	STACK_10
$0166	$0BFA			DECFSZ	STACK_10, F
$0167	$2966			GOTO	$-1
;LED_blinking_in_line.c,26 :: 		PORTB=8;
$0168	$3008			MOVLW	8
$0169	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,27 :: 		DELAY_ms(100);
$016A	$3002			MOVLW	2
$016B	$00FC			MOVWF	STACK_12
$016C	$30FF			MOVLW	255
$016D	$00FB			MOVWF	STACK_11
$016E	$30FF			MOVLW	255
$016F	$00FA			MOVWF	STACK_10
$0170	$0BFC			DECFSZ	STACK_12, F
$0171	$2973			GOTO	$+2
$0172	$297A			GOTO	$+8
$0173	$0BFB			DECFSZ	STACK_11, F
$0174	$2976			GOTO	$+2
$0175	$2979			GOTO	$+4
$0176	$0BFA			DECFSZ	STACK_10, F
$0177	$2976			GOTO	$-1
$0178	$2973			GOTO	$-5
$0179	$2970			GOTO	$-9
$017A	$3006			MOVLW	6
$017B	$00FB			MOVWF	STACK_11
$017C	$30FF			MOVLW	255
$017D	$00FA			MOVWF	STACK_10
$017E	$0BFB			DECFSZ	STACK_11, F
$017F	$2981			GOTO	$+2
$0180	$2984			GOTO	$+4
$0181	$0BFA			DECFSZ	STACK_10, F
$0182	$2981			GOTO	$-1
$0183	$297E			GOTO	$-5
$0184	$300A			MOVLW	10
$0185	$00FA			MOVWF	STACK_10
$0186	$0BFA			DECFSZ	STACK_10, F
$0187	$2986			GOTO	$-1
;LED_blinking_in_line.c,28 :: 		PORTB=4;
$0188	$3004			MOVLW	4
$0189	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,29 :: 		DELAY_ms(100);
$018A	$3002			MOVLW	2
$018B	$00FC			MOVWF	STACK_12
$018C	$30FF			MOVLW	255
$018D	$00FB			MOVWF	STACK_11
$018E	$30FF			MOVLW	255
$018F	$00FA			MOVWF	STACK_10
$0190	$0BFC			DECFSZ	STACK_12, F
$0191	$2993			GOTO	$+2
$0192	$299A			GOTO	$+8
$0193	$0BFB			DECFSZ	STACK_11, F
$0194	$2996			GOTO	$+2
$0195	$2999			GOTO	$+4
$0196	$0BFA			DECFSZ	STACK_10, F
$0197	$2996			GOTO	$-1
$0198	$2993			GOTO	$-5
$0199	$2990			GOTO	$-9
$019A	$3006			MOVLW	6
$019B	$00FB			MOVWF	STACK_11
$019C	$30FF			MOVLW	255
$019D	$00FA			MOVWF	STACK_10
$019E	$0BFB			DECFSZ	STACK_11, F
$019F	$29A1			GOTO	$+2
$01A0	$29A4			GOTO	$+4
$01A1	$0BFA			DECFSZ	STACK_10, F
$01A2	$29A1			GOTO	$-1
$01A3	$299E			GOTO	$-5
$01A4	$300A			MOVLW	10
$01A5	$00FA			MOVWF	STACK_10
$01A6	$0BFA			DECFSZ	STACK_10, F
$01A7	$29A6			GOTO	$-1
;LED_blinking_in_line.c,30 :: 		PORTB=2;
$01A8	$3002			MOVLW	2
$01A9	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,31 :: 		DELAY_ms(100);
$01AA	$3002			MOVLW	2
$01AB	$00FC			MOVWF	STACK_12
$01AC	$30FF			MOVLW	255
$01AD	$00FB			MOVWF	STACK_11
$01AE	$30FF			MOVLW	255
$01AF	$00FA			MOVWF	STACK_10
$01B0	$0BFC			DECFSZ	STACK_12, F
$01B1	$29B3			GOTO	$+2
$01B2	$29BA			GOTO	$+8
$01B3	$0BFB			DECFSZ	STACK_11, F
$01B4	$29B6			GOTO	$+2
$01B5	$29B9			GOTO	$+4
$01B6	$0BFA			DECFSZ	STACK_10, F
$01B7	$29B6			GOTO	$-1
$01B8	$29B3			GOTO	$-5
$01B9	$29B0			GOTO	$-9
$01BA	$3006			MOVLW	6
$01BB	$00FB			MOVWF	STACK_11
$01BC	$30FF			MOVLW	255
$01BD	$00FA			MOVWF	STACK_10
$01BE	$0BFB			DECFSZ	STACK_11, F
$01BF	$29C1			GOTO	$+2
$01C0	$29C4			GOTO	$+4
$01C1	$0BFA			DECFSZ	STACK_10, F
$01C2	$29C1			GOTO	$-1
$01C3	$29BE			GOTO	$-5
$01C4	$300A			MOVLW	10
$01C5	$00FA			MOVWF	STACK_10
$01C6	$0BFA			DECFSZ	STACK_10, F
$01C7	$29C6			GOTO	$-1
;LED_blinking_in_line.c,32 :: 		PORTB=1;
$01C8	$3001			MOVLW	1
$01C9	$0086			MOVWF	PORTB
;LED_blinking_in_line.c,33 :: 		DELAY_ms(100);
$01CA	$3002			MOVLW	2
$01CB	$00FC			MOVWF	STACK_12
$01CC	$30FF			MOVLW	255
$01CD	$00FB			MOVWF	STACK_11
$01CE	$30FF			MOVLW	255
$01CF	$00FA			MOVWF	STACK_10
$01D0	$0BFC			DECFSZ	STACK_12, F
$01D1	$29D3			GOTO	$+2
$01D2	$29DA			GOTO	$+8
$01D3	$0BFB			DECFSZ	STACK_11, F
$01D4	$29D6			GOTO	$+2
$01D5	$29D9			GOTO	$+4
$01D6	$0BFA			DECFSZ	STACK_10, F
$01D7	$29D6			GOTO	$-1
$01D8	$29D3			GOTO	$-5
$01D9	$29D0			GOTO	$-9
$01DA	$3006			MOVLW	6
$01DB	$00FB			MOVWF	STACK_11
$01DC	$30FF			MOVLW	255
$01DD	$00FA			MOVWF	STACK_10
$01DE	$0BFB			DECFSZ	STACK_11, F
$01DF	$29E1			GOTO	$+2
$01E0	$29E4			GOTO	$+4
$01E1	$0BFA			DECFSZ	STACK_10, F
$01E2	$29E1			GOTO	$-1
$01E3	$29DE			GOTO	$-5
$01E4	$300A			MOVLW	10
$01E5	$00FA			MOVWF	STACK_10
$01E6	$0BFA			DECFSZ	STACK_10, F
$01E7	$29E6			GOTO	$-1
;LED_blinking_in_line.c,34 :: 		}
$01E8	$29E8			GOTO	$