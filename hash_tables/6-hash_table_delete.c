#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 *
 * Description:
 * Frees all nodes, all keys, all values, then frees
 * the array and finally frees the hash table structure.
 * If ht is NULL, nothing happens.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}

	free(ht->array);
	free(ht);
}
