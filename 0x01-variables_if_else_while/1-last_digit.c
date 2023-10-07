#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned variable
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digits of %d is %d and is ", n, abs(n) % 10);
	if (abs(n) % 10 > 5)
	{
	printf("greater than 5\n");
	}
	else if (abs(n) % 10 == 0)
	{
	printf("0\n");
	}
	else
	{
	printf("less than 6 and not 0\n");
	}
	return (0);
}
