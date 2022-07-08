#include "main.h"

/**
 * print_numbers - print 0-9
 * Return: nothing
 */

void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar('0' + n)
		n++;
	}
	_putchar('\n');
}
