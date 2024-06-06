#include "binary_trees.h"

/**
 * binary_tree_insert_right - its inserting node right child from another node
 * @parent: pointer to node inserting right child
 * @value: integer value new node
 * Return: returning pointer of new node or null
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

    new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = parent->right;
	new_node->parent = parent;

	if (parent->right != NULL)
		parent->right->parent = new_node;

	parent->right = new_node;

	return (new_node);
}
