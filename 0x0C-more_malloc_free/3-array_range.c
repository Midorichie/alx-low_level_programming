#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: The minimum value of the range
 * @max: The maximum value of the range
 *
 * Return: Always 0 (Success)
 */

int *array_range(int min, int max)
{
	int *arr = (0);
	int size, i;

	if (min > max)
		return (0);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr != 0)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = min + i;
		}
	}
	return (arr);
}
