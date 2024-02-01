#include "binary_trees.h"

/**
 * binary_tree_height - the binary tree height
 * @tree: measure this tree
 * Return: height or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side_h = 0;
	size_t right_side_h = 0;

	if (!tree) /*no trree/ null*/
		return (0);

	if (tree->left)
	{
		left_side_h = 1 + binary_tree_height(tree->left);
	}
	else
	{
		return (0);
	}

	if (tree->right)
	{
		right_side_h = 1 + binary_tree_height(tree->right);
	}
	else
	{
		return (0);
	}

	if (left_side_h > right_side_h)
	{
		return (left_side_h);
	}
	else
	{
		return (right_side_h);
	}
}

