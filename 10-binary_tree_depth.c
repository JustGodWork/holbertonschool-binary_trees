#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree: pointer to the root node
 *
 * Return: the depth of a node
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = -1;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
	{
		depth = binary_tree_depth(tree->parent);
		return (depth + 1);
	}

	return (0);
}
