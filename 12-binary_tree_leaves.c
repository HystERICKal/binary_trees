#include "binary_trees.h"

/**
 * binary_tree_leaves - binary tree leaves tally
 * @tree: tally the leaves of this tree
 * Return: how many leaves present or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t result = 0;

	if (!tree) /* no trree or null*/
		return (0);

	if (!tree->right && !tree->left)
		return (1); /*null pointer is no leaf bro*/

	result = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (result);
}

