#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	if (!parent)
	{
		return (NULL);
	}
	bt = calloc(1, sizeof(binary_tree_t));
	if (!bt)
	{
		return (NULL);
	}
	bt->parent = parent;
	bt->n = value;
	if (parent->right)
	{
		bt->right = parent->right;
		bt->right->parent = bt;
	}
	parent->right = bt;
	return (bt);
}
