#include "binary_trees.h"
/**
 * binary_tree_node - function to create a binary tree node
 * @parent: parent node of the node to be created
 * @value: value to be inserted in the node
 * Return: the address of the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
