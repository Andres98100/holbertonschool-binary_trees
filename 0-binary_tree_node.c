#include "binary_trees.h"

/**
 * binary_tree_node - function create a binary tree
 * @parent: variable struct
 * @value: variable int
 * Return: struct
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
