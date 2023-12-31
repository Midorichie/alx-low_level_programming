#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: Pointer to the node, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp = head;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}

	return (temp ? temp : NULL);
}
