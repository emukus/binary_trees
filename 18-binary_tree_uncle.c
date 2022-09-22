#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: ptr to the node to find the uncle
 *
 * Return: a ptr to the uncle node, otherwise returns NULL if
 *	node is NULL or node has no uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
