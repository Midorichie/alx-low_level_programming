#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the newly allocated memory containing the
 * concatenated string or 0 on failure
 */

char *str_concat(char *s1, char *s2)
{

	char *concatenated;
	unsigned int s1_length = 0, s2_length = 0, i, j;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[s1_length] != '\0')
		s1_length++;
	while (s2[s2_length] != '\0')
		s2_length++;

	concatenated = malloc((s1_length + s2_length + 1) * sizeof(char));
	if (concatenated == 0)
		return (0);

	for (i = 0; i < s1_length; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < s2_length; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}

