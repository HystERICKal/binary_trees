#include "binary_trees.h"

/**
 * binary_tree_postorder - traversing tree with post-order traversal
 * @tree: traverse this tree
 * @func: function pointer
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func) /* no tree/null*/
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n); /* passing node value */
}

