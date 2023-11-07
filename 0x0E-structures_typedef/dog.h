#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with a name and age
 * @name: The name of the dog.
 * @age: The age of the dog'
 */

typedef struct dog
{
	char *name;
	int age;
}
dog_t;

/**
 * print_dog - Prints the details of a dog.
 * @d: Pointer to the dog struct.
 */

void print_dog(dog_t *d);

#endif /* DOG_H */
