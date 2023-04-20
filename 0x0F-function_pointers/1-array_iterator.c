#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterates through an array executing a function on each element
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @action: pointer to the function to execute on each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
