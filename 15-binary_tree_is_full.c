#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full, otherwise 0.
 * If tree is NULL, return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int gauche, droite;

	if (!tree)
		return (0);
	if ((!tree->left && !tree->right))
		return (1);
	gauche = binary_tree_is_full(tree->left);
	droite = binary_tree_is_full(tree->right);
	if (gauche || droite)
		return (1);
	return (0);
}