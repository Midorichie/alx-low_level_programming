#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: the array of arguments
 *
 * Return: A pointer to the concatenated string, else 0
 */

char *argstostr(int ac, char **av)
{
	char *concatenated;
	int total_length = 0;
	int i, j, k = 0;

	if (ac == 0 || av == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}

	concatenated = malloc((total_length + 1) * sizeof(char));
	if (concatenated == 0)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[k] = av[i][j];
			k++;
		}
		concatenated[k] = '\n';
		k++;
	}
	concatenated[k] = '\0';

	return (concatenated);
}
