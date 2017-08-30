/*
 * Byggern_prosjekt.c
 *
 * Created: 30.08.2017 10:35:32
 *  Author: evenskj
 */ 


#include <avr/io.h>
#include <stdio.h>
#include "USART.h"


int main(void)
{
	USART_Init(31);
	printfEnable();
	printf("Nicolai\n");
}


