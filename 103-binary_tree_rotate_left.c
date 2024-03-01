#include "binary_trees.h"

/**
 * binary_tree_rotate_left - func that performs a
 * left-rotation on a binary tree
 * @tree: pointer to the root node
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
    binary_tree_t *new_root;

    if (tree == NULL || tree->right == NULL)
        return tree;

    new_root = tree->right;
    tree->right = new_root->left;

    if (new_root->left != NULL)
        new_root->left->parent = tree;

    new_root->parent = tree->parent;

    if (tree->parent == NULL)
        ;
    else if (tree == tree->parent->left)
        tree->parent->left = new_root;
    else if (tree == tree->parent->right)
        tree->parent->right = new_root;

    new_root->left = tree;
    tree->parent = new_root;

    return new_root;
}
