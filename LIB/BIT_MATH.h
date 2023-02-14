/*
 * BIT_MATH.h
 *
 *  Created on: Feb 9, 2023
 *  Author: Nada
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_
//set
#define SET_BIT(reg,bit)	reg|=(1<<bit)
//clear
#define CLR_BIT(reg,bit)	reg&=(~(1<<bit))
//toggle
#define TOG_BIT(reg,bit)	reg^=(1<<bit)
//get
#define GET_BIT(reg,bit)	(reg&(1<<bit))>>bit

#endif /* BIT_MATH_H_ */
