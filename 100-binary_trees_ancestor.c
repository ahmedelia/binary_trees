#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the Lowest common ansector of two nodes
 * @first: first node element
 * @second: second node element
 * Return: the lowest common ansector node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first->parent == second || !second->parent ||
	    (!second->parent->parent && first->parent))
		return (binary_trees_ancestor(first->parent, second));
	else if (second->parent == first || !first->parent ||
		 (!first->parent->parent && second->parent))
		return (binary_trees_ancestor(first, second->parent));

	return (binary_trees_ancestor(first->parent, second->parent));
}
