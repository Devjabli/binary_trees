#include "binary_trees.h"

/**
 * binary_tree_postorder - going at a binary tree using postorder traversal
 * @tree: tree to traverse
 * @func: pointer function to call for every node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
