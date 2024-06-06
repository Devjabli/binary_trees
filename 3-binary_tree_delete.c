#include "binary_trees.h"

/**
 * binary_tree_delete - call it recursively to delete entir binary tree
 * @tree: pointer from the head root node tree delete
*/


void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
