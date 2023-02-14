/*
 * DIO_private.h
 *
 *  Created on: Feb 9, 2023
 *  Author: Nada
 *  Layer:MCAL
 *  SWC:DIO/GPIO
 */

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_
/* Group A*/
#define PORTA	*((volatile uint8*)0x3B)
#define DDRA	*((volatile uint8*)0x3A)
#define PINA	*((volatile uint8*)0x39)
/* Group B*/
#define PORTB	*((volatile uint8*)0x38)
#define DDRB	*((volatile uint8*)0x37)
#define PINB	*((volatile uint8*)0x36)
/* Group C*/
#define PORTC	*((volatile uint8*)0x35)
#define DDRC	*((volatile uint8*)0x34)
#define PINC	*((volatile uint8*)0x33)
/* Group D*/
#define PORTD	*((volatile uint8*)0x32)
#define DDRD	*((volatile uint8*)0x31)
#define PIND	*((volatile uint8*)0x30)

#endif /* DIO_PRIVATE_H_ */
