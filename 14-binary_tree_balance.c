#include "binary_trees.h"

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
	ans += binary_tree_height(tree->left);
	ans -= binary_tree_height(tree->right);
	return (ans);
}
