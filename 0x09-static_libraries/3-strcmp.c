#include "main.h"

/**
 * _strcmp - to compare string values
 * @s1: input value one
 * @s2: input value two
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
