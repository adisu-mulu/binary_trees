#include "binary_trees.h"
/**
 * binary_tree_depth - function to calculate depth of a tree
 * @tree: the pointer to tree
 * Return: depth of the treecat
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
