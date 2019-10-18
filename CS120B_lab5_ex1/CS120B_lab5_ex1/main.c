/*
 * CS120B_lab5_ex1.c
 *
 * Created: 10/16/2019 7:42:33 PM
 * Author : Matthew L
 */ 

#include <avr/io.h>


int main(void)
{
	 DDRA = 0x00; PORTA = 0xFF; 
	 DDRC = 0xFF; PORTC = 0x00; 

	 unsigned char tmpA = 0x00; 
	 unsigned char tmpC = 0x00;
    
    while (1) 
    {
		 tmpC = 0x00;
		 tmpA = ~PINA & 0x0F;

		 if(tmpA == 1 || tmpA == 2){
			 tmpC = 0x20;
		 }

		 else if(tmpA == 3 || tmpA == 4){
			 tmpC = 0x30;
		 }

		 else if(tmpA == 5 || tmpA == 6){
			 tmpC = 0x38;
		 }

		 else if(tmpA == 7 || tmpA == 8 || tmpA == 9){
			 tmpC = 0x3C;
		 }

		 else if( tmpA == 10 || tmpA == 11 || tmpA == 12){
			 tmpC = 0x3E;
		 }

		 else if(tmpA == 13 || tmpA == 14 || tmpA == 15){
			 tmpC = 0x3F;
		 }
		 else{
			 tmpC = 0;
		 }

		 if(tmpA <= 4){
			 tmpC = tmpC | 0x40;
		 }

		 PORTC = tmpC;
    }
}

