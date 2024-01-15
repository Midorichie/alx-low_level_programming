#include "main.h"

/**
 * _memcpy - function that copies memory
 * @dest: stored memory
 * @src: copied memory
 * @n: number of bytes
 * Return: copied memory with n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
