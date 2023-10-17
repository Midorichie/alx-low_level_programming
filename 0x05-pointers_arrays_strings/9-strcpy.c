#include "main.h"
/**
 * _strcpy - function that copies string pointed to by string
 * @dest: char type string
 * @src: char type string
 * Desc: Copy the string pointed to by 'src' to
 * the buffer pointed to by 'dest'
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
