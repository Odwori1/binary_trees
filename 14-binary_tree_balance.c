#include "binary_trees.h"

/**
 * binary_tree_balance - func that measures the
 * balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height = 0;
int right_height = 0;

if (tree == NULL)
return (0);

if (tree->left)
left_height = binary_tree_height(tree->left) + 1;
if (tree->right)
right_height = binary_tree_height(tree->right) + 1;

return (left_height - right_height);
}

/**
 * binary_tree_height - func for the height
 * @tree: tree
 * Return: right height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0;
size_t right_height = 0;

if (tree == NULL)
return (-1);

left_height = binary_tree_height(tree->left) + 1;
right_height = binary_tree_height(tree->right) + 1;
if (left_height > right_height)
return (left_height);
else
return (right_height);
}
