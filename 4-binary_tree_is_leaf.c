#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
<<<<<<< HEAD
 * @node: pointer to parent
 * Return: int
*/
=======
 * @node: pointer to node to make check on
 * Return: 1 if node is leaf, 0 otherwise
 */

>>>>>>> ammar
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
<<<<<<< HEAD
	if (node->left != NULL || node->right != NULL)
		return (0);
	return (1);
=======
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
>>>>>>> ammar
}
