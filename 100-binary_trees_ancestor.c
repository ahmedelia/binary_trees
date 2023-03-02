#include "binary_trees.h"

binary_tree_t *get_parent(const binary_tree_t *node);

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node element to find its uncle
 * Return: uncle node to the one provided
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *ftemp;
	binary_tree_t *stemp;

	if (first == NULL || second == NULL)
		return NULL;

	if (second->parent == first->parent)
		return (binary_tree_t *)second->parent;
	if (get_parent(first) == second)
		return (binary_tree_t *)second;
	if (get_parent(second) == first)
		return (binary_tree_t *)first;

	return (binary_tree_t *)binary_trees_ancestor(first->parent, second->parent);
}

binary_tree_t *get_parent(const binary_tree_t *node)
{
	if (node == NULL)
		return NULL;
	return node->parent;
}
