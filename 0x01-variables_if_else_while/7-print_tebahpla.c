#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
{

	putchar(ch);
}

	putchar(10);/* this is an ascii code for a new line*/

	return (0);
}
