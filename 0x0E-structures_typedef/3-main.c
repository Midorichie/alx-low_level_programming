#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
dog_t my_dog;

my_dog.name = "Poppy";
my_dog.age = 3.5;

printf("My name is %s, and I am %.1f years old :) - Woof!\n", my_dog.name, (double)my_dog.age);
return (0);
}
