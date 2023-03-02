#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root of tree
 * Return: 1 if it is perfect tree, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return perfect_tree(tree, height(tree), 0);
}

int perfect_tree(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (perfect_tree(tree->left, depth, level + 1) && perfect_tree(tree->right, depth, level + 1));
}

int height(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return 1 + height(node->left);
}
