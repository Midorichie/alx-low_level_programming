#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = 0;
	unsigned int total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}

	ptr = malloc(total_size);

	if (ptr != 0)
	{
		memset(ptr, 0, total_size);
	}
	return (ptr);
}
