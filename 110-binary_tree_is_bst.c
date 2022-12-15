#include "binary_trees.h"
#include <limits.h>

/**
 * is_bst - Checks if a binary is a valid BST
 * @tree: Pointer to root node of the tree to be checked
 * @low: Smallest node value
 * @high: Hieghest node value
 * Return: 1, else 0
 */

int is_bst(const binary_tree_t *tree, int low, int high)
{
	if (tree != NULL)
	{
		if (tree->n < low || tree->n > high)
			return (0);
		return (is_bst(tree->left, low, tree->n - 1) && is_bst(tree->right,
					tree->n + 1, high));
	}
	return (1);
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree
 * @tree: Pointer to the root node the tree to check
 * Return: 1 if tree is a valid BST, else 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}
