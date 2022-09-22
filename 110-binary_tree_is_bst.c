#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst_helper - Checks if a binary tree is a valid binary search tree.
 * @tree: ptr to the root node of the tree to check.
 * @min_v: value of the smallest node visited so far.
 * @max_v: value of the largest node visited so far.
 *
 * Return: If the tree is a valid BST, 1, otherwise, 0.
 */

int is_bst_helper(const binary_tree_t *tree, int min_v, int max_v)
{
	if (tree != NULL)
	{
		if (tree->n < min_v || tree->n > max_v)
			return (0);
		eturn (is_bst_helper(tree->left, min_v, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, max_v));
	}
	return (1);
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree.
 * @tree: a ptr to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
