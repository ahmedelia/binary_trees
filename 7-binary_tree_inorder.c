#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_inorder - create node
 * @tree: pointer to root
 * @func: pointer to function
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
=======
 * binary_tree_inorder - goes through a binary tree
 *                        using in-order traversal
 * @tree: pointer to the root of the tree
 * @func: function used to print node element
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
>>>>>>> ammar
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
