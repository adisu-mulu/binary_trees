#include "binary_trees.h"
/**
 * binary_tree_balance - function to measure the balance factor
 * @tree: pointer to the node
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	return (lh - rh);
}
