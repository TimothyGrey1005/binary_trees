nclude "binary_trees.h"

/**
 * binary_tree_is_leaf - A function to check if a node is a leaf in a binary tree.
 * @node: ptr to node to check.
 * Return: Results
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
