#include "binary_trees.h"
/**
 * binary_tree_depth - measure the depth of a node
 * @tree: pointer to the node to measure
 * Return: return 0 if tree is NULL, otherwie return depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}
