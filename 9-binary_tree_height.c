#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t height_l = binary_tree_height(tree->left);
	size_t height_r = binary_tree_height(tree->right);

	return (1 + (height_l > height_r ? height_l : height_r));
}
