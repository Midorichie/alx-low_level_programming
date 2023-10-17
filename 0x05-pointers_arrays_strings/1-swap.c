#include "main.h"

/**
 * swap_int - take in two variable integers and swaps them
 *
 * @a: swaps and stores the address of b
 * @b: swaps and stores the address of a 
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int change;
	change = *b;
	*b = *a;
	*a = change;
}
