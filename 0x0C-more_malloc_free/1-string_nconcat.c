#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: A pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *result = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc(sizeof(char) * (len1 + n + 1));

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);

	strncat(result, s2, n);

	return (result);
}
