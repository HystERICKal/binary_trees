#include "binary_trees.h"

/**
 * binary_tree_nodes - how many nodes > 0 childs
 * @tree: nodes of this tree
 * Return: node tally or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t result = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	result = binary_tree_size(tree) - binary_tree_leaves(tree);

	return (result);
}

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

