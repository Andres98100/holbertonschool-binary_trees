#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	size_t height;

	root = NULL;

	height = binary_tree_height(root);
	printf("Height of tree with root node (%p): %lu\n", (void *)root, height);

	return (0);
}