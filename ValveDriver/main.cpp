/*
 * ValveDriver.cpp
 *
 * Created: 09-Oct-22 16:22:21
 * Author : Edwin
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	
	DDRB   |= (1 << 5);           // LED on pin PB2
	while(1) {
		_delay_ms(50);              // 50ms delay
		PORTB &= ~(1 << 5);       // LED off
		_delay_ms(50);              // 50ms delay
		PORTB |=  (1 << 5);       // LED on
	}
}

