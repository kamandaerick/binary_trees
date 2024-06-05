#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a given node is a leaf
 * @node: the node to check
 * Return: return 1 if node is leaf and 0 if not leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
