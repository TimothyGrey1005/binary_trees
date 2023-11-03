nclude "binary_trees.h"

/**
 * binary_tree_node - A function to create a new binary tree node.
 * @parent: a ptr to parent of the node to create.
 * @value: A number to insert in the new node.
 * Return: Results
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
