#include "binary_trees.h"
#include "14-binary_tree_balance.c"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to be checked
 * Return: 1 if is perfect, else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i, j;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (binary_tree_balance(tree) != 0)
		return (0);
	if (tree->left && tree->right)
	{
		i = binary_tree_is_perfect(tree->left);
		j = binary_tree_is_perfect(tree->right);
		return (i && j);
	}
	return (0);
}
