#include "holberton.h"
/**
 * print_alphabet_x10 - print 10 tims the alphabet
 *
 *
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar(10);
	}
}
