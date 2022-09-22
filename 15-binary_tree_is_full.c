#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 * @tree: ptr to the root node of the tree to check
 *
 * Return: 1 if tree is full, otherwise 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);
	if (l == 0 || r == 0)
		return (0);
	return (1);
}

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: ptr to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
