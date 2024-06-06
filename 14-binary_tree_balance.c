#include "binary_trees.h"
/**
 * binary_tree_height - function to measure size
 * @tree: pointer to the node of the tree
 * Return: size of the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	if (lh > rh)
		return (lh + 1);
	else
		return (rh + 1);
}
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
