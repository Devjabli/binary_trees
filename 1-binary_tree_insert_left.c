#include "binary_trees.h"

/**
 * binary_tree_insert_left - it's inserting node like left child of node
 * @parent: pointer to node to inserting left child
 * @value: int value new node
 * Return: returning pointer new_node or return null
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL && new_node == NULL)
		return (NULL);


	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = parent->left;
	parent->left = new_node;

	if (new_node->left)
		new_node->left->parent = new_node;
	return (new_node);
}
