#include "binary_trees.h"

/**
 * binary_tree_inorder - going at a binary tree using pre-order traversal
 * @tree: tree to traverse
 * @func: pointer function to call for every node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
