#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to be counted
 * Return: Total nodes, else NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left || tree->right)
	{
		if (tree->right)
			n += binary_tree_nodes(tree->right);
		if (tree->left)
			n += binary_tree_nodes(tree->left);
		n++;
	}
	return (n);
}
