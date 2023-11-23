#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0
 * at a given index
 * @index: Index starting from 0 of the set bit
 * @n: Number
 * Return: 1 for success, -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
