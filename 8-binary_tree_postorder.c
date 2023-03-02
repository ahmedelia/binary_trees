#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_postorder - create node
 * @tree: pointer to root
 * @func: pointer to function
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
=======
 * binary_tree_postorder - goes through a binary tree
 *                        using post-order traversal
 * @tree: pointer to the root of the tree
 * @func: function used to print node element
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
>>>>>>> ammar
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
