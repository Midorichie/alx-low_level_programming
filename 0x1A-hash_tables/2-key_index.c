#include "hash_tables.h"

/**
 * key_index - return the index for the key pair
 * @key: the key passed by the user
 * @size: size of the array
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
