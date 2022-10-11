#include <stdio.h>
#include "main.h"

/**
 * main - free_dog - free dogs
 * @d: pointer to dog to free
 *
 * Return: void
 */
void free-dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d)
	}
}
