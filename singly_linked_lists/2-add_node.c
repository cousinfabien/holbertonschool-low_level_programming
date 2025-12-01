#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - adds a new node at the beginning of a list
* @head: pointer to pointer to the head of the list
* @str: string to duplicate and store in the new node
*
* Return: adress of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;

	return (new);
}
