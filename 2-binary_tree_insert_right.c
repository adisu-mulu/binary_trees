#include "binary_trees.h"
/**
 * binary_tree_insert_right - function to insert to the left side
 * @parent: parent of the node
 * @value: value to be inserted
 * Return: returns the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	if (parent->right == NULL)
	{
		parent->right = newnode;
	}
	else
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
		parent->right = newnode;
	}
	return (newnode);
}
