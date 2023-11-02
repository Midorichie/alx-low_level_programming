#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Re-allocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 *
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = 0;

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}

	if (ptr == 0)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr != 0)
	{
		if (new_size > old_size)
		{
			memcpy(new_ptr, ptr, old_size);
		}
		else
		{
			memcpy(new_ptr, ptr, new_size);
		}
	}

	free(ptr);

	return (new_ptr);
}
