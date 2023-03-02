#include "binary_trees.h"

/**
 * bh - get the hieght of longest branch in binary tree
 * @tree: pointer to the root of the tree
 * Return: height of the binary tree
 */

size_t bh(const binary_tree_t *tree)
{
	size_t left_side;
	size_t right_side;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_side = bh(tree->left) + 1;
	right_side = bh(tree->right) + 1;

	if (left_side > right_side)
		return (left_side);
	return (right_side);
}
/**
 * binary_tree_balance - get the hieght factor
 * @tree: pointer to the root of the tree
 * Return: height of the binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t ans = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		ans += 1;
	if (tree->right != NULL)
		ans -= 1;
	ans += bh(tree->left);
	ans -= bh(tree->right);

	return (ans);
}
