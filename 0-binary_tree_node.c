#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary node
 * @parent: The parent node
 * @value: value of the node
 * Return: newnode
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (!new_node)
        return;

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}