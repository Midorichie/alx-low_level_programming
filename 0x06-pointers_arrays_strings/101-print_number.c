#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_number - print numbers
 * Desc This function prints the given integer, using only
 * the _putchar function
 * @n: integer to be printed
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);

	putchar((n % 10) + '0');
}
