
/*
 * DIO.c
 *
 *
 *      Author: Ahmed Ragab
 */

#include "GPIO.h"
#include "GPIO_MAP.h"



void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Result)
{
    uint8_t PORT = (ChannelId / 8U);
    uint8_t PIN  = (ChannelId % 8U);

    switch (PORT)
    {
        case PORTA:
            INSERT_BIT(GPIO_PORTA_DATA_R, PIN, Result);
            break;
        case PORTB:
            INSERT_BIT(GPIO_PORTB_DATA_R, PIN, Result);
            break;
        case PORTC:
            INSERT_BIT(GPIO_PORTC_DATA_R, PIN, Result);
            break;
        case PORTD:
            INSERT_BIT(GPIO_PORTD_DATA_R, PIN, Result);
            break;
        case PORTE:
            INSERT_BIT(GPIO_PORTE_DATA_R, PIN, Result);
            break;
        case PORTF:
            INSERT_BIT(GPIO_PORTF_DATA_R, PIN, Result);
            break;
        default:
            /* DO NOTHING */
            break;
    }
}

Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
    uint8_t PORT = (ChannelId / 8U);
    uint8_t PIN  = (ChannelId % 8U);
    uint8_t Result = 0U;

    switch (PORT)
    {
        case PORTA:
            Result = GET_BIT(GPIO_PORTA_DATA_R, PIN);
            break;
        case PORTB:
            Result = GET_BIT(GPIO_PORTB_DATA_R, PIN);
            break;
        case PORTC:
            Result = GET_BIT(GPIO_PORTC_DATA_R, PIN);
            break;
        case PORTD:
            Result = GET_BIT(GPIO_PORTD_DATA_R, PIN);
            break;
        case PORTE:
            Result = GET_BIT(GPIO_PORTE_DATA_R, PIN);
            break;
        case PORTF:
            Result = GET_BIT(GPIO_PORTF_DATA_R, PIN);
            break;
        default:
            /* DO NOTHING */
            break;
    }

    return Result;
}




uint8_t Dio_ReadPort(uint8_t PORT_Id)
{
    uint8_t Result = 0;
    switch (PORT_Id)
    {
        case PORTA:
            Result = GPIO_PORTA_DATA_R;
            break;
        case PORTB:
            Result = GPIO_PORTB_DATA_R;
            break;
        case PORTC:
            Result = GPIO_PORTC_DATA_R;
            break;
        case PORTD:
            Result = GPIO_PORTD_DATA_R;
            break;
        case PORTE:
            Result = GPIO_PORTE_DATA_R;
            break;
        case PORTF:
            Result = GPIO_PORTF_DATA_R;
            break;
        default:
            /* DO NOTHING */
            break;
    }
    return Result;
}


void Dio_WritePort(uint8_t PORT_Id, uint8_t Result)
{
    switch (PORT_Id)
    {
        case PORTA:
            GPIO_PORTA_DATA_R = Result;
            break;
        case PORTB:
            GPIO_PORTB_DATA_R = Result;
            break;
        case PORTC:
            GPIO_PORTC_DATA_R = Result;
            break;
        case PORTD:
            GPIO_PORTD_DATA_R = Result;
            break;
        case PORTE:
            GPIO_PORTE_DATA_R = Result;
            break;
        case PORTF:
            GPIO_PORTF_DATA_R = Result;
            break;
        default:
            /* DO NOTHING */
            break;
    }
}

