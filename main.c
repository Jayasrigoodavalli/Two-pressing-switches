/*
 * GccApplication8.c
 *
 * Created: 10-May-19 12:22:36 PM
 * Author : JAYASREE
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRA=0XFF;
	DDRB=0X00;
	 while (1) 
    {
		if((PINB &(1<<PB0))==0)
		{
		PORTA=1<<PA0;
		_delay_ms(1000);
		PORTA=0<<PA0;
		_delay_ms(1000);
		PORTA=1<<PA1;
		_delay_ms(1000);
		PORTA=0<<PA1;
		_delay_ms(1000);
		PORTA=1<<PA2;
		_delay_ms(1000);
		PORTA=0<<PA2;
		_delay_ms(1000);
		PORTA=1<<PA3;
		_delay_ms(1000);
		PORTA=0<<PA3;
		_delay_ms(1000);
		PORTA=1<<PA4;
		_delay_ms(1000);
		PORTA=0<<PA4;
		_delay_ms(1000);
		PORTA=1<<PA5;
		_delay_ms(1000);
		PORTA=0<<PA5;
		_delay_ms(1000);
		PORTA=1<<PA6;
		_delay_ms(1000);
		PORTA=0<<PA6;
		_delay_ms(1000);
		PORTA=1<<PA7;
		_delay_ms(1000);
		PORTA=0<<PA7;
		_delay_ms(1000);
		}
		if((PINB &(1<<PB1))==0)
		{
		PORTA=1<<PA7;
		_delay_ms(1000);
		PORTA=0<<PA7;
		_delay_ms(1000);
		PORTA=1<<PA6;
		_delay_ms(1000);
		PORTA=0<<PA6;
		_delay_ms(1000);
		PORTA=1<<PA5;
		_delay_ms(1000);
		PORTA=0<<PA5;
		_delay_ms(1000);
		PORTA=1<<PA4;
		_delay_ms(1000);
		PORTA=0<<PA4;
		_delay_ms(1000);
		PORTA=1<<PA3;
		_delay_ms(1000);
		PORTA=0<<PA3;
		_delay_ms(1000);
		PORTA=1<<PA2;
		_delay_ms(1000);
		PORTA=0<<PA2;
		_delay_ms(1000);
		PORTA=1<<PA1;
		_delay_ms(1000);
		PORTA=0<<PA1;
		_delay_ms(1000);
		PORTA=1<<PA0;
		_delay_ms(1000);
		PORTA=0<<PA0;
		_delay_ms(1000);
		}
	
    }
}

