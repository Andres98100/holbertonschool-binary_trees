#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if is perfect. 0 otherwise of if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int refer_d = refer_d_left(tree);

	if (tree == NULL)
		return (0);
	return (aux_is_perfect(tree, refer_d, 0));
}

/**
 * aux_is_perfect - Function in charge of recursive call
 *
 * @tree: pointer to the tree to check if is perfect
 * @refer_d: reference depth of the left leaf node
 * @level: level of the current iteration
 *
 * Return: 1 if is perfect. 0 otherwise of if tree is NULL
 */
int aux_is_perfect(const binary_tree_t *tree, int refer_d, int level)
{
	if (tree->left == NULL && tree->right == NULL)
		return (refer_d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (aux_is_perfect(tree->left, refer_d, level + 1) &&
		aux_is_perfect(tree->right, refer_d, level + 1));
}

/**
 * refer_d_left - gets the depth of the further left node for reference
 *
 * @tree: tree to get the reference depth from
 *
 * Return: Depth of the node
 */
int refer_d_left(const binary_tree_t *tree)
{
	int refer_d = 0;

	while (tree != NULL)
	{
		refer_d++;
		tree = tree->left;
	}
	return (refer_d);
}
