#include "binary_trees.h"

/**
 * bst_search - searches for a value in a binary search tree
 * @tree: pointer to the root node of the BST to search
 * @value: value to search in the tree
 * Return: pointer to the node containing a value equal to value
 *  or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *ptr;

	for (ptr = (bst_t *)tree; ptr;)
	{
		if (ptr->n == value)
			return (ptr);
		else if (ptr->n > value)
			ptr = ptr->left;
		else
			ptr = ptr->right;
	}
	return (NULL);
}
