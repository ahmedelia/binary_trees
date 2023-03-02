#include "binary_trees.h"

/**
 * binary_tree_height - get the hieght of longest branch in binary tree
 * @tree: pointer to the root of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side;
	size_t right_side;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_side = binary_tree_height(tree->left) + 1;
	right_side = binary_tree_height(tree->right) + 1;

	if (left_side > right_side)
		return (left_side);
	return (right_side);
}
