#include "main.h"

/**
 * _memset - function that fills a block of memory with a value
 * @s: starting address of memory
 * @b: desired value
 * @n: number of bytes to be changed
 * Return: change array with new value for bytes
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int c = 0;

	for (; n > 0; c++)
	{
		s[c] = b;
		n--;
	}
	return (s);
}
