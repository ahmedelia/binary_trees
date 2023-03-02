#include "binary_trees.h"

/**
 * binary_tree_node - create node
 * @parent: pointer to parent
 * @val: node data
 * Return: void
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
