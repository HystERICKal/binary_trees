#include "binary_trees.h"

/**
 * bst_search - look for value in BST
 * @tree: root node pointer
 * @value: search for this value
 * Return: poinetr or null
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *test = (bst_t *)tree;

	if (!tree) /*no tree or null*/
		return (NULL);

	for (; test; )
	{
		if (value == test->n)
			return (test);
		if (value < test->n)
			test = test->left;
		else if (value > test->n)
			test = test->right;
	}

	return (NULL);
}

