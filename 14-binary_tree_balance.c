#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor. 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left = 1;
	int h_right = 1;

	if (tree == NULL)
		return (0);
	if (tree->left)
		h_left += height(tree->left);
	else
		h_left = 0;
	if (tree->right)
		h_right += height(tree->right);
	else
		h_right = 0;
	return (h_left - h_right);
}

/**
 * height - gets the height of a tree
 *
 * @tree: tree to get the height from
 *
 * Return: height of the tree
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	else
		return (1 + max(height(tree->left), height(tree->right)));
}

/**
 * max - get the max number between two
 *
 * @a: int
 * @b: int
 *
 * Return: ax between a and b
 */
int max(int a, int b)
{
	return ((a >= b) ? a : b);
}
