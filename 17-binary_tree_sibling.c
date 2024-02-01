#include "binary_trees.h"

/**
 * binary_tree_sibling - look for the node's sibling
 * @node: the node pointer
 * Return: sibling node pointer or null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL); /*no node or parent node*/
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
