#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: ptr to the first element of the array to be converted
 * @size: no. of elements in the array
 *
 * Return: ptr to the root node of the new BST, or NULL on failure
 *
 * Description: If a value of the array already exists, this value is ignored
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	for (i = 0; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}
	return (root);
}
