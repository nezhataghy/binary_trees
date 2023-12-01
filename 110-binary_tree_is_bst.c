#include "binary_trees.h"

int sup_a(const binary_tree_t *tree, int val);
int inf_a(const binary_tree_t *tree, int val);

/**
 * binary_tree_is_bst - checks if a binary tree is a valid binary search tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise
 * If tree is NULL, return 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (inf_a(tree->left, tree->n) && sup_a(tree->right, tree->n))
	{
		if ((!tree->left || binary_tree_is_bst(tree->left)) &&
			(!tree->right || binary_tree_is_bst(tree->right)))
			return (1);
	}
	return (0);
}

/**
 * sup_a - check if all values in the tree are greater than a value
 * @tree: pointer to the tree to check
 * @val: value to check against
 * Return: 1 if true, 0 if false
 */
int sup_a(const binary_tree_t *tree, int val)
{
	if (!tree)
		return (1);
	if ((tree->n > val) &&
		(sup_a(tree->left, val) && sup_a(tree->right, val)))
		return (1);
	return (0);
}

/**
 * inf_a - check if all values in the tree are less than a specific value
 * @tree: pointer to the tree to check
 * @val: value to check against
 * Return: 1 if true, 0 if false
 */
int inf_a(const binary_tree_t *tree, int val)
{
	if (!tree)
		return (1);
	if ((tree->n < val) &&
		(inf_a(tree->left, val) && inf_a(tree->right, val)))
		return (1);
	return (0);
}
