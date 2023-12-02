#include "binary_trees.h"
/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 * Return: a pointer to the created node
 * NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *ptr;

	if (!tree)
		return (NULL);
	if (!(*tree))
	{
		*tree = (bst_t *)binary_tree_node(NULL, value);
		return (*tree);
	}
	for (ptr = *tree; ptr;)
	{
		if (ptr->n == value)
			break;
		if (ptr->n > value)
		{
			if (!ptr->left)
			{
				ptr->left = (bst_t *)binary_tree_node(ptr, value);
				return (ptr->left);
			}
			ptr = ptr->left;
		}
		else if (ptr->n < value)
		{
			if (!ptr->right)
			{
				ptr->right = (bst_t *)binary_tree_node(ptr, value);
				return (ptr->right);
			}
			ptr = ptr->right;
		}
	}
	return (NULL);
}
