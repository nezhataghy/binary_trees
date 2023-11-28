#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_counter = 0, r_counter = 0;

		if (tree->left)
			l_counter = 1 + binary_tree_height(tree->left);
		else
			l_counter = 0;

		if (tree->right)
			r_counter = 1 + binary_tree_height(tree->right);
		else
			r_counter = 0;

		if (l_counter > r_counter)
			return (l_counter);
		else
			return (r_counter);
	}
	return (0);
}
