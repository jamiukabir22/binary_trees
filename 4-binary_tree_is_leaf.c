#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if the given node is a leaf
 * @node: Node to check
 * Return: 1 if node is leaf else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
		if (node->right == NULL && node->left == NULL)
			return (1);
	return (0);
}
