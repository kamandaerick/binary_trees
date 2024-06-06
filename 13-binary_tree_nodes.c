#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "12-binary_tree_leaves.c"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * Return: The number of nodes with at least 1 child (or 0 if tree is NULL)
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;
	size_t leaves;

	nodes = binary_tree_size(tree);
	leaves = binary_tree_leaves(tree);
	return (nodes - leaves);
}
