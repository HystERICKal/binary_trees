#include "binary_trees.h"

/**
 * binary_tree_depth - node depth measuring
 * @tree: depth of this node should be calculated
 * Return: node depth or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t how_deep = 0;

	if (!tree) /* no tree/ null*/
		return (0);

	for (; tree->parent;)
	{
		how_deep++;
		tree = tree->parent;
	}

	return (how_deep);
}

