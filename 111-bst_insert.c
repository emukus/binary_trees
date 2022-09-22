#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double ptr to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 *
 * Description: If the address stored in tree is NULL, the created node must
 * become the root node. If the value is already present in the tree, it must
 * be ignored
 *
 * Return: a ptr to the created node, or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp, *new;

	if (tree != NULL)
	{
		tmp = *tree;

		if (tmp == NULL)
		{
			new = binary_tree_node(tmp, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}

		if (value < tmp->n) /* insert in left subtree */
		{
			if (tmp->left != NULL)
				return (bst_insert(&tmp->left, value));

			new = binary_tree_node(tmp, value);
			if (new == NULL)
				return (NULL);
			return (tmp->left = new);
		}
		if (value > tmp->n) /* insert in right subtree */
		{
			if (tmp->right != NULL)
				return (bst_insert(&tmp->right, value));

			new = binary_tree_node(tmp, value);
			if (new == NULL)
				return (NULL);
			return (tmp->right = new);
		}
	}
	return (NULL);
}
