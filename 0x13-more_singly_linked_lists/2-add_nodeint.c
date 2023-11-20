#include "lists.h"

/**
 * add_nodeint - adds a node at the start of a linked list
 * @head: pointer to the first node
 * @n: data to insert in the new node
 * Return: The pointer to the new node, else 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
