#include "binary_trees.h"
/**
 * binary_tree_insert_left - function to insert to the left side
 * @parent: parent of the node
 * @value: value to be inserted
 * Return: returns the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	if (parent->left == NULL)
	{
		parent->left = newnode;
	}
	else
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
		parent->left = newnode;
	}
	return (newnode);
}
