#include "binary_trees.h"

/**
 * binary_tree_height - func that measures the height of binary tree
 * @tree: pointer to the root node
 * Return: tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);
	return (left_height > right_height ? left_height : right_height);
}
