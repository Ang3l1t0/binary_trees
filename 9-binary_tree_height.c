#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	l = binary_tree_height(tree->left);
	l++;
	r = binary_tree_height(tree->right);
	r++;
	if (l > r)
		return (l);
	else
		return (r);
}
