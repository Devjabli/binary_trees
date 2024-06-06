#include "binary_trees.h"

/**
 * binary_tree_is_root - checking a node if is a root
 * @node: node to check
 *
 * Return: if 1 node is a root | if 0 not a root | if 0 node is NULL
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
