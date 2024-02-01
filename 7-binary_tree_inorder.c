#include "binary_trees.h"

/**
 * binary_tree_inorder - traversing tree with in-order traversal
 * @tree: traverse this tree
 * @func: function pointer
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func) /* no tree/null*/
		return;

	binary_tree_inorder(tree->left, func);	/*traverse subtree*/
	func(tree->n);							/* passing node value */
	binary_tree_inorder(tree->right, func); /*traverse other subtree*/
}

