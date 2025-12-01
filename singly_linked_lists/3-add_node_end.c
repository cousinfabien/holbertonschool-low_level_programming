#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - adds a new node at the end of a list
* @head: pointer to pointer to head of list
* @str: string to duplicate and store
*
* Return: adress of the new element, or NULL if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	char *dup_str;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	new->str = dup_str;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	return (new);
}
