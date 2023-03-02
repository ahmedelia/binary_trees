#include "binary_trees.h"

/**
 * binary_tree_depth - get the depth of node element in binary tree
 * @tree: pointer to the root of the tree
 * Return: depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
