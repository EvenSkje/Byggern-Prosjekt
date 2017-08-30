#include <avr/io.h>

void USART_Init();
void USART_Transmit( unsigned char data );
unsigned char USART_Receive( void );
void printfEnable();