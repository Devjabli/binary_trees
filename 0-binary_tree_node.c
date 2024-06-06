#include "binary_trees.h"

/**
 * binary_tree_node - it's creating new binary tree node
 * @parent: parent pointer node
 * @value: int value in new node
 * Return: return pointer called new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->parent = parent;
		new->n = value;
		new->left = NULL;
		new->right = NULL;
	}
	return (new);
}
