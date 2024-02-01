#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is it a leaf node?
 * @node: Check this node
 * Return: 1 0r 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (!node || node->left || node->right)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

