#include "binary_trees.h"
/**
 * binary_tree_nodes - function to calculate the nodes with atleast 1 child
 * @tree: the pointer to the tree
 * Return: num of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	lh = binary_tree_nodes(tree->left);
	rh = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (rh + lh + 1);
	else
		return (rh + lh);
}
