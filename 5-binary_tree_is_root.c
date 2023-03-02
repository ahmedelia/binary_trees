#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_is_root - checks if a node is a leaf
 * @node: pointer to parent
 * Return: int
*/
=======
 * binary_tree_is_root - checks if a node is a root element
 * @node: pointer to node to make check on
 * Return: 1 if node is root, 0 otherwise
 */

>>>>>>> ammar
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
