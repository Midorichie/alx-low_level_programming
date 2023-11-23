#include "main.h"

/**
 * get_bit - Function that returns the value of a bit in
 * a given index
 * @n: Number to check bits in
 * @index: Index to check bits
 * Return: Value of the bit at index, else -1 if there
 * is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
