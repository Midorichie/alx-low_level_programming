#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints characters of a string
 * @str: the used string reference
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			putchar(str[z]);
		}
		z++;
	}
	putchar('\n');
}
