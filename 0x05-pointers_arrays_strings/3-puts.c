#include "main.h"

/**
 * _puts - prints str followed by a new line
 * @str: pointer to the string to point
 * Return: void
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;

	}
	_putchar('\n');
}
