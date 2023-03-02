#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node element to find its uncle
 * Return: uncle node to the one provided
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left != NULL && node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	if (node->parent->parent->right != NULL && node->parent->parent->right != node->parent)
		return (node->parent->parent->right);
	return NULL;
}
