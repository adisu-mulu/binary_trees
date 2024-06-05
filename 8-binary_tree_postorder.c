#include "binary_trees.h"
/**
 * binary_tree_postorder - function to list in preorder form
 * @tree: the root of the tree
 * @func: pointer to function
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}
