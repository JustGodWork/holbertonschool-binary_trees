#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node
 *
 * Return: the number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == 0 && tree->right == 0)
		return (1);

	else
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
	}

	return (left + right);
}
