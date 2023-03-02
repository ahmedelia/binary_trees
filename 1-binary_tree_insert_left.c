#include "binary_trees.h"

/**
 * binary_tree_insert_left - create node
 * @parent: pointer to parent
 * @value: node data
 * Return: void
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = binary_tree_node(parent, value);

	if (new == NULL || parent == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = new;
		return (new);
	}
	parent->left->parent = new;
	new->left = parent->left;
	parent->left = new;
	return (new);

}
