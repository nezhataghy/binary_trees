#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least
 *  1 child in a binary tree
 * @tree: pointer pointer to the root node of the tree
 *  to count the number of nodes
 * Return: number of nodes with at least 1 child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num;

	if (!tree || (tree && !tree->left && !tree->right))
		return (0);
	num = binary_tree_nodes(tree->left);
	num += binary_tree_nodes(tree->right);
	return (1 + num);
}
