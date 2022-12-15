#include "binary_trees.h"

/**
 * binary_tree_leaves - Count leaves in a binary tree
 * @tree: Pointer to root node of the tree to be counted
 * Return: Total number of leaves else 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i;

	if (tree == NULL)
		return (0);
	i = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (i);
}
