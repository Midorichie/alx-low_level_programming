#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - recursive function to print to screen
 *
 * @s: pointer to the string
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		putchar('\n');
	}
}
