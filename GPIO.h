
/*
 * DIO.c
 *
 *      Author: Ahmed Ragab
 */


#ifndef DIO_DIO_H_
#define DIO_DIO_H_

#include "../../BIT_MATH.h"
#include "stdint.h"

typedef uint8_t Dio_ChannelType;
typedef uint8_t Dio_LevelType  ;

enum level
{
    LOW = 0,
    HIGH
};

enum PORTS
{

    PORTA,
    PORTB,
    PORTC,
    PORTD,
    PORTE,
    PORTF

};

void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Result);
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);
void Dio_WritePort(uint8_t PORT_Id, uint8_t Result);
uint8_t Dio_ReadPort(uint8_t PORT_Id);


#endif /* DIO_DIO_H_ */
