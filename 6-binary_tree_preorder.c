nclude "binary_trees.h"

/**
 * binary_tree_preorder - a function that traverses a binary tree.
 * @tree: ptr to root node of the tree .
 * @func: Results
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
