#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * at a given index
 * @n: The number to set
 * @index: The given index that the bit is set
 * Return: 1 for Success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
