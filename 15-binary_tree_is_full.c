#include "binary_trees.h"
/**
 * binary_tree_is_full - function to check if the tree is full
 * @tree: the pointer to the tree
 * Return: num of nodes
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lh = binary_tree_is_full(tree->left);
	rh = binary_tree_is_full(tree->right);

	if (tree->left != NULL && tree->right == NULL)
		return (0);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	return (rh && lh);
}
