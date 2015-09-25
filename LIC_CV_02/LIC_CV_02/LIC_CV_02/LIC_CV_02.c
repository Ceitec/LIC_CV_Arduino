/*
 * LIC_CV_02.c
 *
 * Created: 18.8.2015 12:56:34
 *  Author: Lukas
 */ 


#include <avr/io.h>

int main(void)
{
	DDRA = (1 << PA7) | (1 << PA6) | (1 << PA5);
    while(1)
    {
		PORTA = 0xFF;
        //TODO:: Please write your application code 
    }
}