#include "binary_trees.h"

/**
 * binary_tree_size - function measures the size of a binary tree
 * @tree: variable struct
 * Return: size_t
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
