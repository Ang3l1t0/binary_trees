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

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: number of descendant
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: Return: 1 if true 0 if false
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int n, h;

	if (!tree)
		return (0);
	n = (int)binary_tree_size(tree);
	h = binary_tree_height(tree);
	return (n == (2 << h) - 1);
}
