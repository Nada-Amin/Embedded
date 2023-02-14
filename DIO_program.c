/*
 * DIO_program.c
 *
 *  Created on: Feb 9, 2023
 *  Author: Nada
 *  Layer:MCAL
 *  SWC:DIO/GPIO
 */
//Library Files
#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_private.h"
#include "DIO_interface.h"
#include "DIO_config.h"
void DIO_voidSetPinDirection(uint8 Copy_uint8PORT,uint8 Copy_uint8PIN,uint8 Copy_uint8Direction)
{
	if(Copy_uint8Direction==DIO_PIN_OUTPUT){
		switch(Copy_uint8PORT)
		{
			case DIO_PORTA:SET_BIT(DDRA,Copy_uint8PIN);break;
			case DIO_PORTB:SET_BIT(DDRB,Copy_uint8PIN);break;
			case DIO_PORTC:SET_BIT(DDRC,Copy_uint8PIN);break;
			case DIO_PORTD:SET_BIT(DDRD,Copy_uint8PIN);break;
		}
	}
	else if(Copy_uint8Direction==DIO_PIN_INPUT){
		switch(Copy_uint8PORT)
				{
					case DIO_PORTA:CLR_BIT(DDRA,Copy_uint8PIN);break;
					case DIO_PORTB:CLR_BIT(DDRB,Copy_uint8PIN);break;
					case DIO_PORTC:CLR_BIT(DDRC,Copy_uint8PIN);break;
					case DIO_PORTD:CLR_BIT(DDRD,Copy_uint8PIN);break;
				}
	}
}
void DIO_voidSetPinValue(uint8 Copy_uint8PORT,uint8 Copy_uint8PIN,uint8 Copy_uint8Value){
	if(Copy_uint8Value==DIO_PIN_HIGH){
			switch(Copy_uint8PORT)
			{
				case DIO_PORTA:SET_BIT(PORTA,Copy_uint8PIN);break;
				case DIO_PORTB:SET_BIT(PORTB,Copy_uint8PIN);break;
				case DIO_PORTC:SET_BIT(PORTC,Copy_uint8PIN);break;
				case DIO_PORTD:SET_BIT(PORTD,Copy_uint8PIN);break;
			}
		}
		else if(Copy_uint8Value==DIO_PIN_LOW){
			switch(Copy_uint8PORT)
					{
						case DIO_PORTA:CLR_BIT(PORTA,Copy_uint8PIN);break;
						case DIO_PORTB:CLR_BIT(PORTB,Copy_uint8PIN);break;
						case DIO_PORTC:CLR_BIT(PORTC,Copy_uint8PIN);break;
						case DIO_PORTD:CLR_BIT(PORTD,Copy_uint8PIN);break;
					}
		}
}
uint8 DIO_voidGetPinValue(uint8 Copy_uint8PORT,uint8 Copy_uint8PIN){
	uint8 LOC_uint8Status=0;
	switch(Copy_uint8PORT)
	{
		case DIO_PORTA:LOC_uint8Status=GET_BIT(PINA,Copy_uint8PIN);break;
		case DIO_PORTB:LOC_uint8Status=GET_BIT(PINB,Copy_uint8PIN);break;
		case DIO_PORTC:LOC_uint8Status=GET_BIT(PINC,Copy_uint8PIN);break;
		case DIO_PORTD:LOC_uint8Status=GET_BIT(PIND,Copy_uint8PIN);break;
	}
	return LOC_uint8Status;
}

void DIO_voidTogglePinValue(uint8 Copy_uint8PORT,uint8 Copy_uint8PIN){
	switch(Copy_uint8PORT)
	{
		case DIO_PORTA:TOG_BIT(PORTA,Copy_uint8PIN);break;
		case DIO_PORTB:TOG_BIT(PORTB,Copy_uint8PIN);break;
		case DIO_PORTC:TOG_BIT(PORTC,Copy_uint8PIN);break;
		case DIO_PORTD:TOG_BIT(PORTD,Copy_uint8PIN);break;
	}
}

void DIO_voidSetPortDirection(uint8 Copy_uint8PORT,uint8 Copy_uint8Direction){
	switch(Copy_uint8PORT)
	{
		case DIO_PORTA:DDRA=Copy_uint8Direction;break;
		case DIO_PORTB:DDRB=Copy_uint8Direction;break;
		case DIO_PORTC:DDRC=Copy_uint8Direction;break;
		case DIO_PORTD:DDRD=Copy_uint8Direction;break;
	}

}
void DIO_voidSetPortValue(uint8 Copy_uint8PORT,uint8 Copy_uint8Value){
	switch(Copy_uint8PORT)
	{
		case DIO_PORTA:PORTA=Copy_uint8Value;break;
		case DIO_PORTB:PORTB=Copy_uint8Value;break;
		case DIO_PORTC:PORTC=Copy_uint8Value;break;
		case DIO_PORTD:PORTD=Copy_uint8Value;break;
	}
}
uint8 DIO_voidGetPortValue(uint8 Copy_uint8PORT){
	uint8 LOC_uint8Status=0;
	switch(Copy_uint8PORT)
		{
			case DIO_PORTA:LOC_uint8Status=PINA;break;
			case DIO_PORTB:LOC_uint8Status=PINB;break;
			case DIO_PORTC:LOC_uint8Status=PINC;break;
			case DIO_PORTD:LOC_uint8Status=PIND;break;
		}
	return LOC_uint8Status;
}
void DIO_voidTogglePortValue(uint8 Copy_uint8PORT){
	switch(Copy_uint8PORT)
		{
			case DIO_PORTA:PORTA^=0xFF;break;
			case DIO_PORTB:PORTB^=0xFF;break;
			case DIO_PORTC:PORTC^=0xFF;break;
			case DIO_PORTD:PORTD^=0xFF;break;
		}
}

