#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog structure
 * @d: Pointer to the dog to free
 *
 * Description: Frees all memory associated with a dog structure,
 * including the name and owner strings
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
