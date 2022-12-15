#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to lowest common ancestor, else NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *tmp = second;

	while (first)
	{
		second = tmp;
		while (second)
		{
			if (first->n == second->n)
			{
				if (first->left != NULL)
					return (first->left->parent);
				else if (first->right != NULL)
					return (first->right->parent);
			}
			second = second->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
