#include "hash_tables.h"

/**
 * free_items - frees the key value pair
 * @tmp: Represents tmp
 */

void free_items(hash_node_t *tmp)
{
	free(tmp->key);
	free(tmp->value);
	free(tmp);
}


/**
 * hash_table_delete - deletes a hash table
 * @ht: Represents hash table
 */

void hash_table_delete(hash_table_t *ht)
{

	unsigned long int i;
	hash_node_t *tmp = NULL;
	hash_node_t *current = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			tmp = current;
			current = current->next;
			free_items(tmp);
		}
	}

	free(ht->array);
	free(ht);
}
