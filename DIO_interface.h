/*
 * DIO_interface.h
 *
 *  Created on: Feb 9, 2023
 *  Author: Nada
 *  Layer:MCAL
 *  SWC:DIO/GPIO
 */
//exported file to user
#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
//PINDirection
#define DIO_PIN_OUTPUT	1
#define DIO_PIN_INPUT	0
//Port
#define DIO_PORTA	0
#define DIO_PORTB	1
#define DIO_PORTC	2
#define DIO_PORTD	3
//Pin
#define DIO_PIN0	0
#define DIO_PIN1	1
#define DIO_PIN2	2
#define DIO_PIN3	3
#define DIO_PIN4	4
#define DIO_PIN5	5
#define DIO_PIN6	6
#define DIO_PIN7	7
//value
#define DIO_PIN_HIGH	1
#define DIO_PIN_LOW		0
//PORTDirection
#define DIO_PORT_OUTPUT	1
#define DIO_PORT_INPUT	0
void DIO_voidSetPinDirection(uint8 Copy_uint8PORT,uint8 Copy_uint8PIN,uint8 Copy_uint8Direction);//pass by value
void DIO_voidSetPinValue(uint8 Copy_uint8PORT,uint8 Copy_uint8PIN,uint8 Copy_uint8Value);
uint8 DIO_voidGetPinValue(uint8 Copy_uint8PORT,uint8 Copy_uint8PIN);
void DIO_voidTogglePinValue(uint8 Copy_uint8PORT,uint8 Copy_uint8PIN);

void DIO_voidSetPortDirection(uint8 Copy_uint8PORT,uint8 Copy_uint8Direction);
void DIO_voidSetPortValue(uint8 Copy_uint8PORT,uint8 Copy_uint8Value);
uint8 DIO_voidGetPortValue(uint8 Copy_uint8PORT);
void DIO_voidTogglePortValue(uint8 Copy_uint8PORT);
#endif /* DIO_INTERFACE_H_ */
