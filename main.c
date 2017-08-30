/*
 * Byggern_prosjekt.c
 *
 * Created: 30.08.2017 10:35:32
 *  Author: evenskj
 */ 


#include <avr/io.h>
#include <stdio.h>
#include "USART.h"
#define FOSC 4915200
#define BAUD 9600


int main(void)
{
	USART_Init();
	printfEnable();
	printf("Nicolai\n");
	char* a;
	scanf("%d",a);
	printf("Receive: %s",a);
}


