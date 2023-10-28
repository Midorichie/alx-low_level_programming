#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * _putchar: prints new line
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\0');
}
