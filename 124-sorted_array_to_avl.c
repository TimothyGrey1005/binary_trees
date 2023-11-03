#include "binary_trees.h"

/**
 * create_tree - A function that creates an AVL tree with recursion
 * @node: a ptr node
 * @array: integer array
 * @size: array size
 * @mode: 1 left, 2 right
 * Return: None
 */
void create_tree(avl_t **node, int *array, size_t size, int mode)
{
	size_t middle;

	if (size == 0)
		return;

	middle = (size / 2);
	middle = (size % 2 == 0) ? middle - 1 : middle;

	if (mode == 1)
	{
		(*node)->left = binary_tree_node(*node, array[middle]);
		create_tree(&((*node)->left), array, middle, 1);
		create_tree(&((*node)->left), array + middle + 1, (size - 1 - middle), 2);
	}
	else
	{
		(*node)->right = binary_tree_node(*node, array[middle]);
		create_tree(&((*node)->right), array, middle, 1);
		create_tree(&((*node)->right), array + middle + 1, (size - 1 - middle), 2);
	}
}

/**
 * sorted_array_to_avl - a function to create root node and call to create_tree
 * @array: integer array
 * @size: array size
 * Return: Results
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *root;
	size_t middle;

	root = NULL;

	if (size == 0)
		return (NULL);

	middle = (size / 2);

	middle = (size % 2 == 0) ? middle - 1 : middle;

	root = binary_tree_node(root, array[middle]);

	create_tree(&root, array, middle, 1);
	create_tree(&root, array + middle + 1, (size - 1 - middle), 2);

	return (root);
}
