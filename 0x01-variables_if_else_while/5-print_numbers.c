#include <stdio.h>

/**
 * main - printf
 *
 * Return: Succes(0) Error(1)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar(10);
	return (0);
}
