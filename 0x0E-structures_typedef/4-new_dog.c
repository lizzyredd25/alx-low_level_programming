#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - initialises a struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to a typedef (dog_t) of the struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int ln, lo;

	ndog = malloc(sizeof(dog_t));
	if (!ndog)
		return (NULL);
	ndog->age = age;
	ln = strlen(name), lo = strlen(owner);
	ndog->name = malloc(sizeof(name) * (ln + 1));
	if (!ndog->name)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(owner) * (lo + 1));
	if (!ndog->owner)
	{
		free(ndog);
		free(ndog->name);
		return (NULL);
	}
	strcpy(ndog->name, name);
	strcpy(ndog->owner, owner);
	return (ndog);
}
