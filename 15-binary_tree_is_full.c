#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node
 *
 * Return: 1 if full, 0 if not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree->left) == binary_tree_is_full(tree->right))
		return (1);

	return (0);
}
