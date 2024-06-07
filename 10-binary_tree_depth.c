#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of a node in a binary tree.
 * @tree: node to measure depth
 *
 * Return: returning depth of node, || if 0 the tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	for (; tree->parent != NULL; tree = tree->parent)
		depth++;

	return (depth);
}
