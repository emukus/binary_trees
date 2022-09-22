#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: ptr to the root node of the tree to traverse
 * @func: ptr to a function to call for each node.
 *	the value in the node must be passed as a parameter to this function
 */

void binary_tree_inorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
