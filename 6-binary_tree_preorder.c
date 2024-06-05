#include "binary_trees.h"
/**
 * binary_tree_preorder - function to list in preorder form
 * @tree: the root of the tree
 * @func: pointer to function
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
