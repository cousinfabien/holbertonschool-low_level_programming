#include "hash_tables.h"

/**
 * key_index - gives the index of a key for a hash table of given size
 * @key: the key to get the index for
 * @size: size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
