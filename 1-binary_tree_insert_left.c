#include "binary_trees.h"

/**
 * binary_tree_insert_left - function  inserts a node at left
 * @parent: variable struct
 * @value: variable int
 * Return: struct
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (parent->left)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	parent->left = new;
	return (new);
}
