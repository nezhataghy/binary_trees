#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: number of element in the array
 * Return: pointer to the root node of the created BST
 * or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t counter = 0;
	bst_t *the_root = NULL;

	while (counter < size)
	{
		bst_insert(&the_root, array[counter]);
		counter++;
	}
	return (the_root);
}
