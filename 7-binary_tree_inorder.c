#include "binary_trees.h"

/**
 * binary_tree_inorder - function print the tree binary in inorder
 * @tree: variable struct
 * @func: variable pointer function
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		printf("%i", tree->n);
		printf("\n");
		binary_tree_inorder(tree->right, func);
	}
}
