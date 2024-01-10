#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor of a tree
 * @tree: pointer to the root node
 *
 * Return: balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != 0)
	{
		left = 1;
		left += binary_tree_balance(tree->left);
	}

	if (tree->right != 0)
	{
		right = 1;
		right += binary_tree_balance(tree->right);
	}

	return (left - right);
}
