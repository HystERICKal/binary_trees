#include "binary_trees.h"

/**
 * binary_tree_delete - binary tree deleter
 * @tree: the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree) /* no tree/null */
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree); /* memory management*/
}

