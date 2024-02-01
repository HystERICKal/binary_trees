#include "binary_trees.h"

/**
 * binary_tree_is_root - is it a root node
 * @node: check this node
 * Return: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	if (!node || node->parent)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

