#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a tree node is a root
 * @node: the node to check
 * Return: return 1 if the node is root and 0 if it is not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
