#include "binary_trees.h"

/**
 * max - function
 * @a: variable int
 * @b: variable int
 * Return: int
 */

int max(int a, int b)
{
    return (a >= b) ? a : b;
}

/**
 * function_height - function
 * @tree: variable struct
 * Return: int
 */

int function_height(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    return (1 + max(function_height(tree->left), function_height(tree->right)));
}

/**
 * binary_tree_balance - function measures the balance factor of a binary tree
 * @tree: variable struct
 * Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    int H_left, H_right;

    if (!tree)
        return (0);
    H_left = function_height(tree->left);
    H_right = function_height(tree->right);
    if (abs(H_left - H_right) <= 1 && binary_tree_balance(tree->left)
         && binary_tree_balance(tree->right))
        return (1);
    return (0);
}
