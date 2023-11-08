#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on Success, else error
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	if (argc != 4)
	{

		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	int (*operation)(int, int) = get_op_func(operation);

	int result = operation(num1, num2);

	printf("%d\n", result);

	return (0);
}
