#include "binary_trees.h"
/**
 * binary_tree_is_root - function to check if node is root
 * @node: node to be checked
 * Return: 0 0r 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
