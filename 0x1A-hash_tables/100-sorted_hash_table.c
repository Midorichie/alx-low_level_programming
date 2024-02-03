#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: pointer to the newly created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;
	unsigned long int i = 0;

	table = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;

	table->array =
		(shash_node_t **)calloc(table->size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (i < table->size)
	{
		table->array[i] = NULL;
		i++;
	}

	table->shead = NULL;
	table->stail = NULL;

	return (table);

}

/**
 * create_sorted_item - allocates memory to the key value pair
 * @key: The key
 * @value: value corresponding to a key
 * Return: newly created item
 */

shash_node_t *create_sorted_item(char *key, char *value)
{
	shash_node_t *item = NULL;

	item = (shash_node_t *)malloc(sizeof(shash_node_t));
	if (item == NULL)
		return (NULL);

	item->key = (char *)malloc(strlen(key) + 1);
	if (item->key == NULL)
	{
		free(item);
		return (NULL);
	}

	item->value = (char *)malloc(strlen(value) + 1);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (NULL);
	}
	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;
	item->sprev = NULL;
	item->snext = NULL;

	return (item);
}


/**
 * insert_to_sll - arranges the list in a sorted manner
 * @shead: head of the list
 * @new_node: new node to be added
 */

void insert_to_sll(shash_node_t **shead, shash_node_t *new_node)
{
	shash_node_t *current = NULL;
	shash_node_t *prev = NULL;

	current = *shead;
	while (current != NULL && strcmp(current->key, new_node->key) < 0)
	{
		prev = current;
		current = current->snext;
	}
	new_node->snext = current;
	new_node->sprev = prev;

	if (prev == NULL)
	{
		*shead = new_node;
	}
	else
		prev->snext = new_node;
	if (current != NULL)
		current->sprev = new_node;
}


/**
 * shash_table_set - addas an element to the hash table
 * @ht: it's the hash table needed to add or update the key/value to
 * @key: it's the key and can't be empty
 * @value: value associated with the key
 * Return: 1 for success, else 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index;
	shash_node_t *new_node = NULL;
	const char *value_dup = strdup(value);

	if (key == NULL || *key == '\0')
		return (0);
	if (ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	new_node = create_sorted_item((char *)key, (char *)value_dup);
	if (new_node == NULL)
		return (0);
	insert_to_sll(&(ht->shead), new_node);

	ht->stail = new_node;

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

		return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table to be looked into
 * @key: Key that's looked for
 * Return: the value associated with the element, else NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{

	shash_node_t *current = NULL;
	unsigned long int index;

	if (key == NULL)
		return (NULL);

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - it prints a hash table
 * @ht: the hash table
 */

void shash_table_print(const shash_table_t *ht)
{

	unsigned long int count = 0;
	shash_node_t *tmp = ht->shead;

	if (ht != NULL)
	{
		printf("{");
		while (tmp != NULL)
		{
			if (count > 0)
			{
				printf(", ");
			}
			printf("'%s';: '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			count++;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - prints a hash table
 * @ht: The hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *tmp = ht->stail;

	if (ht != NULL)
	{
		printf("{");
		while (tmp != NULL)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->sprev;
			count++;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - It deletes a hash table
 * @ht: The hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp = NULL;
	shash_node_t *current = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			tmp = current;
			current = current->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);
}
