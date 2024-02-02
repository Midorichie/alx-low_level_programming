#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the hash table
 * Return: Pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int m = 0;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array =
		(hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (m < table->size)
	{
		table->array[m] = NULL;
		m++;
	}

	return (table);
}

