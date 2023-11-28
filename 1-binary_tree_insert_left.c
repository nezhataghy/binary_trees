#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: return a pointer to the created node,
 *  or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_noeud;

	if (parent == NULL)
		return (NULL);

	n_noeud = binary_tree_node(parent, value);
	if (n_noeud == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		n_noeud->left = parent->left;
		parent->left = n_noeud;
		n_noeud->left->parent = n_noeud;
	}
	else
		parent->left = n_noeud;

	return (n_noeud);
}
