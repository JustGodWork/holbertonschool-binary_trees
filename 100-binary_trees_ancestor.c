#include "binary_trees.h"

/**
 * binary_tree_ancestor - function that finds the lowest ancestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor or NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *ancestor1;
	binary_tree_t *ancestor2;

	if (!first || !second || !first->parent || !second->parent)
		return (NULL);

	if (first->parent == second->parent)
		return (first->parent);
	else if (first->parent == second)
		return ((binary_tree_t *) second);
	else if (second->parent == first)
		return ((binary_tree_t *) first);
	else if (first->parent != second->parent)
	{
		ancestor1 = binary_trees_ancestor(first, second->parent);
		ancestor2 = binary_trees_ancestor(first->parent, second);

		if (ancestor1)
			return (ancestor1);
		else
			return (ancestor2);
	}

return (0);
}
