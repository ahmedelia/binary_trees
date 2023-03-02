#include "binary_trees.h"

<<<<<<< HEAD

/**
 * delete_node - helper
 * @node: node to delete
 * Return: void
*/
void delete_node(binary_tree_t *node)
{
	if (node == NULL)
		return;

	delete_node(node->left);
	delete_node(node->right);
	free(node);
}
/**
 * binary_tree_delete - create node
 * @tree: pointer to parent
 * Return: void
*/

void binary_tree_delete(binary_tree_t *tree)
{
	delete_node(tree);
=======
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to tree root
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
>>>>>>> ammar
}
