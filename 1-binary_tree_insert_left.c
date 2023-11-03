#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts node as left-child of
 *                           of another in binary tree.
 * @parent: Pointer to node to insert left-child in.
 * @value: Value to store in new node.
 *
 * Return: If parent NULL or error occurs - NULL.
 *         Otherwise - pointer to new node.
 *
 * Description: If parent has left-child already, new node
 *              takes its place and old left-child is set as
 *              left-child of new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
