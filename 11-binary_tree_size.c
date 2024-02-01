#include "binary_trees.h"

/**
 * binary_tree_size - binary tree size measurement
 * @tree: measure size of this tree
 * Return: tree size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t result = 0;

	if (!tree) /*no tree/null */
		return (0);

	result = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;

	return (result);
}

