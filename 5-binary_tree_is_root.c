#include "binary_trees.h"

/**
 * binary_tree_is_root - function checks if a node is a root
 * @node: variable struct
 * Return: int
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	else
		return (1);
	return (0);
}
