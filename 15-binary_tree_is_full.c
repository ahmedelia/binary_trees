#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full or not
 * @tree: pointer to the root of binary tree
 * Return: 1 if binary tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return 0;
}
