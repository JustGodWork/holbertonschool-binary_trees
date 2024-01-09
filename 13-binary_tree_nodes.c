#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * @tree: pointer to the root node
 *
 * Return: number of nodes with at least 1 child
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == 0 && tree->right == 0)
		return (0);

	if (tree->left != 0 || tree->right != 0)
	{
		left = binary_tree_nodes(tree->left);
		right = binary_tree_nodes(tree->right);
	}

	return (left + right + 1);

}
