#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 *
 * Return: pointer to the created node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->parent = parent;
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	else
	{
		new_node->parent = parent;
		parent->left = new_node;
	}

	return (new_node);
}
