#include "hash_tables.h"

/**
 * hash_djb2 - The hash function returns the hash code to generate
 * the index
 *
 * @str: the string who's hash code is to be generated
 * Return: the hash code
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
