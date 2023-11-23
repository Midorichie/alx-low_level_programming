#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to to flip
 * from one number to another
 * @n: The first number
 * @m: The second number
 * Return: Number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			countbit++;
	}
	return (countbit);
}
