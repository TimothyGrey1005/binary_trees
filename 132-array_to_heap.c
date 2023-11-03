#include "binary_trees.h"

/**
 * array_to_heap - from array, builds max binary heap tree 
 * @array: pointer to first element of array to be converted
 * @size: number of elements in array
 *
 * Return: pointer to root node of created Binary Heap
 *         failure NULL
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
