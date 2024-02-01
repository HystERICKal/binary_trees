#include "binary_trees.h"

/**
 * binary_tree_preorder - traversing tree with pre-order traversal
 * @tree: traverse this tree
 * @func: function pointer
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func) /* no tree/null*/
		return;

	func(tree->n); /* passing node value */
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

