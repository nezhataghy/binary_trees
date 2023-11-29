#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a tree in a binary tree
 * @tree: pointer to the tree to measure the depth
 * Return: 0 if tree is NULL If tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	if (tree)
	{
		while (tree->parent)
		{
			tree = tree->parent;
			tree_depth++;
		}
	}
	return (tree_depth);
}
