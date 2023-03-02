#include "binary_trees.h"

/**
 * binary_tree_insert_right - create node
 * @parent: pointer to parent
 * @val: node data
 * Return: void
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = binary_tree_node(parent, value);

	if (new == NULL || parent == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = new;
		return (new);
	}
	parent->right->parent = new;
	new->right = parent->right;
	parent->right = new;
	return (new);

}
