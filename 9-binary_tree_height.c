#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = -1, right = -1;

	if (tree == NULL)
		return (0);

	if (tree->left != 0 || tree->right != 0)
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
	}

	if (left > right)
	{
		return (left + 1);
	}
	else
	{
		return (right + 1);
	}
}

