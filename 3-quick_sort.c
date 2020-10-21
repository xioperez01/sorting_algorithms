#include "lists.h"

/**
 *insert_dnodeint_at_index - function that inserts a new node at a
 * given position.
 *@h: Linkend list
 *@idx: is the index of the list where the new node should be added.
 *@n: List contend
 *Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (h == NULL || *h == NULL || tmp == NULL || new_node == NULL)
		return (NULL);

	tmp = *h;
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		tmp->prev = new_node;
		new_node->next = tmp;
		*h = new_node;
		return (new_node);
	}

	while (tmp)
	{
		if (i == (idx - 1))
		{
			new_node->prev = tmp;
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		i++;
	}

	return (NULL);
}
