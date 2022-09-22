#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: ptr to the first node
 * @second: ptr to the second node
 *
 * Return: a ptr to the lowest common ancestor node of the two given nodes
 *	Otherwise, returns NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
	binary_tree_t *pop;

	if (first == NULL || second == NULL)
		return (NULL);
	pop = (binary_tree_t *)second;
	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = pop;
		first = first->parent;
	}
	return (NULL);
}
