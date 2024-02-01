#include "binary_trees.h"

/**
 * binary_tree_node - bt node creator
 * @parent: points to parent node
 * @value: put this value in brandi node
 * Return: pointer or null
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *brandi;

	brandi = malloc(sizeof(binary_tree_t));
	if (!brandi)
		return (NULL);
	brandi->n = value;
	brandi->parent = parent;
	brandi->left = NULL;
	brandi->right = NULL;
	return (brandi); /* pointer to new node*/
}
