#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array.
 * Return: a pointer to the newly created hash table, otherwise NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table;
unsigned long int n;

hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
	return (NULL);
hash_table->size = size;
hash_table->array = malloc(size * sizeof(hash_table_t));
if (hash_table->array == NULL)
{
	free(hash_table);
	return (NULL);
}
for (n = 0; n < size; n++)
	hash_table->array[n] = NULL;
return (hash_table);
}
