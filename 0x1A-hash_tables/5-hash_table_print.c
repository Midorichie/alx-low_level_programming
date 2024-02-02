#include "hash_tables.h"

/**
 * hash_table_print - it prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int count = 0;
	hash_node_t *tmp = NULL;

	if (ht != NULL)
	{
		printf("{");

		for (i = 0; i < ht->size; i++)
		{
			tmp = ht->array[i];
			while (tmp)
			{
				if (count > 0)
				{
					printf(", ");
				}
				printf("'%s': '%s'", tmp->key, tmp->value);

				tmp = tmp->next;
				count++;
			}
		}
		printf("}\n");
	}
}
