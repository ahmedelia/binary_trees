#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root of tree
 * Return: 1 if it is perfect tree, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_tree;
	int right_tree;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_tree = binary_tree_height(tree->left);
	right_tree = binary_tree_height(tree->right);

	return (right_tree == left_tree);
}
