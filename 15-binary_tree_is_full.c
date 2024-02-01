#include "binary_trees.h"

/**
 * binary_tree_is_full - is the binary tree full?
 * @tree: points to binary tree root node
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree) /*no tree orr null*/
		return (0);

	if (!tree->right && !tree->left)
		return (1); /*tree finished*/

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (0);
}

