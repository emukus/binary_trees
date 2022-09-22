#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: ptr to the node to measure depth
 *
 * Return: 0 if tree is NULL, else return depth.
 */

size_t binary_tree_depth(const binary_tree t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
