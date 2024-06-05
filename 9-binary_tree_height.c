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
	return 1 + ((lh > rh) ? lh : rh);
}
