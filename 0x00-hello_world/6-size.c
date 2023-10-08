#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n", size_of(char));
	printf("size of an int: %lu byte(s)\n", size_of(int));
	printf("size of a long int: %lu byte(s)\n", size_of(long int));
	printf("size of a long long long int: %lu byte(s)\n", size_of(long long int));
	printf("size of a float: %lu byte(s)\n", size_of(float));

	return (0);
}
