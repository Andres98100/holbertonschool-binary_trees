#include "binary_trees.h"

/**
 * binary_tree_is_full - function checks if a binary tree is full
 * @tree: variable struct
 * Return: int
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
