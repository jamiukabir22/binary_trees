#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: Pointer to root node of the tree to be measured
 * Return: Height else 0
 */

size_t height(const binary_tree_t *tree)
{
	size_t i, j;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	i = height(tree->left) + 1;
	j = height(tree->right) + 1;
	return (j > i ? j : i);
}


/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to root node of the tree to be measured
 * Return: Balance factor, else 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int i = 0, j = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		i = height(tree->left) + 1;
	if (tree->right)
		j = height(tree->right) + 1;
	return (i - j);
}
