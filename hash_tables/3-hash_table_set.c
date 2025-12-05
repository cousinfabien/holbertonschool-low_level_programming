#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds or updates an element in a hash table
 * @ht: pointer to the hash table
 * @key: the key (cannot be empty)
 * @value: the value associated with the key (will be duplicated)
 *
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	char *value_copy;
	unsigned long int index;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			value_copy = strdup(value);
			if (!value_copy)
				return (0);
			free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	value_copy = strdup(value);
	if (!new_node->key || !value_copy)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
