#include "binary_trees.h"

/**
 * binary_trees_ancestor - func that finds the
 * lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the sec node
 * Return: the node of the ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *f = (binary_tree_t *)first;
	binary_tree_t *s = (binary_tree_t *)second;
	binary_tree_t *f_ancestors[1024];
	binary_tree_t *s_ancestors[1024];
	int i, j;

	for (i = 0; f; i++)
	{
		f_ancestors[i] = f;
		f = f->parent;
	}
	for (j = 0; s; j++)
	{
		s_ancestors[j] = s;
		s = s->parent;
	}

	for (i = i - 1; i >= 0; i--)
		for (j = j - 1; j >= 0; j--)
			if (f_ancestors[i] == s_ancestors[j])
				return (f_ancestors[i]);
	return (NULL);
}
