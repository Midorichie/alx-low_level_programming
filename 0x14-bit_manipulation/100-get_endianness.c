#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	int i;
	char *j;

	i = 1;
	j = (char *)&i;

	return (*j);
}
