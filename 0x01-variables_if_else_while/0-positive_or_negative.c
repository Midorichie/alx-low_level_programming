#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is the main function
 * Return: always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("The number %d ", n);
	if (n > 0)
	{
	printf("%d is +\n", n);
	}
	else if (n == 0)
	{
	printf("%d is 0\n", n);
	}
	else
	{
	printf("%d is -\n", n);
	}
	return (0);
}
