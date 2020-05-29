#include "hash_tables.h"

/**
 * hash_table_create -creates a hash table.
 * @size: hash table array size
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size == 0)
	{
		return (NULL);
	}
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
