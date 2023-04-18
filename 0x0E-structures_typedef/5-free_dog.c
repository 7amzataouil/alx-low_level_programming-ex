#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog to free
 *
 * Description: This function frees the memory that was allocated for the
 *              struct dog pointed to by @d, including the strings allocated
 *              for the name and owner fields.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
