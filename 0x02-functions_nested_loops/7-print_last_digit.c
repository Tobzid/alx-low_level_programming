#include "main.h"
/**
* print_last_digit.c
* @n : passed args
* Return:the last digit 
*/
{
	int x;

	if (n >= 0)
	{
		x = n % 10;
	}
	else if (n < 0)
	{
		x = -(n % 10);
	}
	_putchar('0' + x);
	return (x);
}
