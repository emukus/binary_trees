#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: ptr to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL, else return the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}

/**
 * binary_tree_level - performs a function on a specific level of a binary tree
 * @tree: ptr to the root of the tree
 * @l: level of the tree to perform a function on
 * @func: ptr to function to perform
 */

void binary_tree_level(const binary_tree_t *tree, size_t l, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (l == 1)
		func(tree->n);
	else if (l > 1)
	{
		binary_tree_level(tree->left, l - 1, func);
		binary_tree_level(tree->right, l - 1, func);
	}
}

/**
 * binary_tree_levelorder - goes through a binary tree using level-order
 *		traversal
 * @tree: ptr to the root node of the tree to traverse
 * @func: ptr to a function to call for each node. The value in the node
 *	must be passed as a parameter to this function.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void(*func)(int))
{
	size_t height, i;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_heigh(tree);
	for (i = 1; i <= height; i++)
		binary_tree_level(tree, i, func);
}
