#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent:  pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: returnS a pointer to the new node, or NULL on failure
 **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_noeud;

	n_noeud = malloc(sizeof(binary_tree_t));
	if (n_noeud == NULL)
		return (NULL);

	n_noeud->parent = parent;
	n_noeud->n = value;
	n_noeud->left = NULL;
	n_noeud->right = NULL;

	return (n_noeud);
}
