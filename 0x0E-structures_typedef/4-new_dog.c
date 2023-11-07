#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * dog_t *new_dog - creates a new dog with the given name, age, and owner
 * @name: The  name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: pointer if successful, else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (0);
	}

	newDog->name = (char *)malloc(strlen(name) + 1);
	if (newDog->name == 0)
	{
		free(newDog);
		return (0);
	}
	strcpy(newDog->name, name);

	newDog->owner = (char *)malloc(strlen(owner) + 1);
	if (newDog->owner == 0)
	{
		free(newDog->name);
		free(newDog);
		return (0);
	}
	strcpy(newDog->owner, owner);

	newDog->age = age;

	return (newDog);
