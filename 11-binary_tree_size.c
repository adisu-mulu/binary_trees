#include "binary_trees.h"
/**
 * binary_tree_size - function to calculate size
 * @tree: pointer to the root
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lh = binary_tree_size(tree->left);
	rh = binary_tree_size(tree->right);
	return (1 + (lh + rh));
}
