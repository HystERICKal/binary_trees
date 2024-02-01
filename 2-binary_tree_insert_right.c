#include "binary_trees.h"

/**
 * binary_tree_insert_right - right child node inserter
 * @parent: insert right child node here
 * @value: store this in new node
 * Return: pointer or null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *brandi;

	if (!parent)
		return (NULL);

	brandi = malloc(sizeof(binary_tree_t));
	if (!brandi)
		return (NULL);

	brandi->n = value;
	brandi->parent = parent;
	brandi->left = NULL;
	brandi->right = parent->right;
	parent->right = brandi;
	if (brandi->right)
		brandi->right->parent = brandi;
	return (brandi);
}

