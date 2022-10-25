#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a listint_t list
 * @head: head of the list
 * @n: new data
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
