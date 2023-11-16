#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - displays the number of elements of a task
 * @z: A linked list
 * Return: The number of elements of a list
 */
size_t list_len(const list_t *z)
{
	size_t count = 0;

	while (z)
	{
		z = z->next;
		count++;
	}

	return (count);
}
