#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the used string reference pointer
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		putchar(s[start]);
	putchar('\n');
}
