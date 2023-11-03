nclude "binary_trees.h"

/**
 * binary_tree_depth - a function to measure the depth of a node in a binary tree.
 * @tree: a ptr to node to measure the depth of.
 * Return: Results
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
