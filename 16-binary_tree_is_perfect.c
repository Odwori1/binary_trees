#include "binary_trees.h"
/**
 * binary_tree_leaves - func that counts the leaves in binary tree
 * @tree: pointer to the root node
 * Return: NULL pointer is not a leaf
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

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

/**
 * binary_tree_is_perfect - func that checks if a binary
 * tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;
	size_t leaves_left = 0;
	size_t leaves_right = 0;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);

	if ((height_left == height_right) && (leaves_left == leaves_right))
		return (1);

	return (0);
}
