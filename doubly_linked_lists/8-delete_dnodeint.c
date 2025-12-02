#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp;
    unsigned int i = 0;

    if (head == NULL || *head == NULL)
        return (-1);

    temp = *head;

    /* Cas particulier : suppression du premier élément */
    if (index == 0)
    {
        *head = temp->next;

        if (*head != NULL)   /* S'il existe un nouveau premier nœud */
            (*head)->prev = NULL;

        free(temp);
        return (1);
    }

    /* Avancer jusqu'au nœud à supprimer */
    while (temp != NULL && i < index)
    {
        temp = temp->next;
        i++;
    }

    /* Si l'index dépasse la taille de la liste */
    if (temp == NULL)
        return (-1);

    /* Relier les nœuds autour */
    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
    return (1);
}
