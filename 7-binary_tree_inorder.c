#include "binary_trees.h"

/**
 * binary_tree_inorder - function print the tree binary in inorder
 * @tree: variable struct
 * @func: variable pointer function
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
