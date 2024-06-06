#include "binary_trees.h"
/**
 * binary_tree_leaves - count num of leaves
 * @tree: the pointer to the node
 * Return: num of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lh = binary_tree_leaves(tree->left);
	rh = binary_tree_leaves(tree->right);
	return (lh + rh);
}
