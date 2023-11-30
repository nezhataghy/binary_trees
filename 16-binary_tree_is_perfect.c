#include "binary_trees.h"


/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the nodes in
 * Description: A NULL pointer is not a node
 * Return: number of nodes with at least 1 child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || (tree && !tree->left && !tree->right))
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (1 + left + right);
}


/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0, else return height.
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_counter = 0, r_counter = 0;

		if (tree->left)
			l_counter = 1 + binary_tree_height(tree->left);
		if (tree->right)
			r_counter = 1 + binary_tree_height(tree->right);
		if (l_counter > r_counter)
			return (l_counter);
		return (r_counter);
	}
	return (0);
}
 */

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise. If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);
	if (binary_tree_nodes(tree->left) == binary_tree_nodes(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}