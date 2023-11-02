#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: the node to check
 * Return: return 1 if it a leaf and 0 if it isn't
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if ((node->left == NULL) && (node->right == NULL))
		return (1);
	else
		return (0);
}
