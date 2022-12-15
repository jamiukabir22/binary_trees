#include "binary_trees.h"
#include <stdbool.h>
#include "11-binary_tree_size.c"

/**
 * complete - checks if binary tree is complete
 * @tree: Pointer to root node of tree
 * @idx: Index
 * @node: NUmber of nodes
 * Return: 1 if tree is complete, else 0
 */

bool complete(const binary_tree_t *tree, unsigned int idx, unsigned int node)
{
	if (tree == NULL)
		return (true);
	if (idx >= node)
		return (false);
	return (complete(tree->left, 2 * idx + 1, node) &&
			complete(tree->right, 2 * idx + 2, node));
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if tree is complete, else 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int comp = 0;
	unsigned int idx = 0, nodes = 0;

	nodes = binary_tree_size(tree);
	comp = complete(tree, idx, nodes);
	return (comp);
}
