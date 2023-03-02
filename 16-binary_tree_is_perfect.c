#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root of tree
 * Return: 1 if it is perfect tree, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (perfect_tree(tree, height(tree), 0));
}

/**
 * perfect_tree - determine if tree is perfect tree or not
 *                with the help of the height of the sides of tree
 * @tree: pointer to root of tree
 * @height: height of the tree
 * @level: current level of height
 * Return: 1 if tree is perfect, 0 otherwise
 */

int perfect_tree(const binary_tree_t *tree, int height, int level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (height == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (perfect_tree(tree->left, height, level + 1) &&
		perfect_tree(tree->right, height, level + 1));
}

/**
 * height - calculate the height of tree
 * @node: pointer to root of tree
 * Return: height of tree
 */

int height(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (1 + height(node->left));
}
