#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to lowest ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *ptr;

	if (!first || !second)
		return (NULL);
	ptr = (binary_tree_t *)second;
	for (; first; first = first->parent)
	{
		for (; second; second = second->parent)
		{
			if (first == second)
				return ((binary_tree_t *)first);
		}
		second = ptr;
	}
	return (NULL);
}
