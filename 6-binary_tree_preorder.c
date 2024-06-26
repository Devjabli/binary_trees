#include "binary_trees.h"

/**
 * binary_tree_preorder - going at a binary tree using pre-order traversal
 * @tree: tree to traverse
 * @func: pointer function to call for every node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
