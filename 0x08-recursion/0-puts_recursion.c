#include "main.h"
/**
 * _puts_recursion - recursive implementation of puts() function
 * @s: pointer to string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s == NULL)
		return;

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
