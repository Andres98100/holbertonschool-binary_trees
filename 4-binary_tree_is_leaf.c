#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function checks if a node is a leaf
 * @node: variable struct
 * Return: int
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
	return (0);
}
