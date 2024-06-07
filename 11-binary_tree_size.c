#include "binary_trees.h"

/**
 * binary_tree_size - Gathering length of a binary tree.
 * @tree: measure size of tree.
 *
 * Return: returnig length tree, || if 0 tree is NULL.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
