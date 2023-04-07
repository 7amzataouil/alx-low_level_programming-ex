#include "main.h"
int _strlen_recursion(char *s)
/**
 * _strlen_recursion - Returns the length of a string.
 * Return: The length of the string.
 */

{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
