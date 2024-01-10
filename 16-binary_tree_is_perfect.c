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

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
	{
		return (left + 1);
	}
	else
	{
		return (right + 1);
	}
}

/**
 * binary_tree_balance - function that measures the balance factor of a tree
 * @tree: pointer to the root node
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);

}

/**
 * binary_tree_is_perfect - function that checks if a tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_balance(tree) != 0)
		return (0);

	return (binary_tree_is_perfect(tree->left) && 
			binary_tree_is_perfect(tree->right));
}
