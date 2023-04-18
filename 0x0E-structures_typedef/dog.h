#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stddef.h>

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * init_dog - initializes a dog structure
 * @d: pointer to dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */
void init_dog(dog_t *d, char *name, float age, char *owner);

/**
 * print_dog - prints a dog structure
 * @d: pointer to dog structure
 *
 * Return: void
 */
void print_dog(const dog_t *d);

/**
 * new_dog - creates a new dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog structure
 */
dog_t *new_dog(const char *name, float age, const char *owner);

/**
 * free_dog - frees memory allocated for a dog structure
 * @d: pointer to dog structure
 *
 * Return: void
 */
void free_dog(dog_t *d);

#endif
