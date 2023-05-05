#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, i;

	/* Get the most significant bit position */
	for (i = 0; i < sizeof(unsigned long int) * 8 - 1; i++)
	{
		mask = (mask << 1) | 1;
	}

	/* Print the binary digits */
	for (; i > 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}

	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
