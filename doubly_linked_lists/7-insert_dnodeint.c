#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be inserted
 * @n: value to store in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	/* Insertion en tête */
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;

	/* Avancer jusqu'au noeud juste avant l'index */
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	/* Si on n'a pas trouvé la position */
	if (temp == NULL)
		return (NULL);

	/* Si on insère en fin (après le dernier) */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Insertion au milieu */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->prev = temp;
	new_node->next = temp->next;

	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
