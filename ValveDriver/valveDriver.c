/*
 * valveDriver.c
 *
 * Created: 09-Oct-22 16:23:10
 *  Author: Edwin
 */ 

// https://startingelectronics.org/tutorials/AVR-8-microcontrollers/ATtiny2313-tutorial/P10-delay-library-function/

#include "valveDriver.h"
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

void valveDriver()
{
	DDRB   |= (1 << 2);           // LED on pin PB2
	while(1) {
		_delay_ms(50);              // 50ms delay
		PORTB &= ~(1 << 2);       // LED off
		_delay_ms(50);              // 50ms delay
		PORTB |=  (1 << 2);       // LED on
	}
}