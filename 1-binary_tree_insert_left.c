#include "binary_trees.h"

/**
 * binary_tree_insert_left - left child node inserter
 * @parent: insert left child node here
 * @value: store this in new node
 * Return: pointer or null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *brandi;

	if (!parent)
		return (NULL);

	brandi = malloc(sizeof(binary_tree_t));
	if (!brandi)
		return (NULL);

	brandi->n = value;
	brandi->parent = parent;
	brandi->right = NULL;
	brandi->left = parent->left;
	parent->left = brandi;
	if (brandi->left)
		brandi->left->parent = brandi;
	return (brandi);
}

