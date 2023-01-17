#include "binary_trees.h"

/**
 * binary_tree_preorder - function print the tree binary in pre-Order
 * @tree: variable struct
 * @func: variable pointer function
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
