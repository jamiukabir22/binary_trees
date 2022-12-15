#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to node to be measured
 * Return: Depth, else 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i;

	for (i = 0; tree && tree->parent; i++)
		tree = tree->parent;
	return (i);
}
