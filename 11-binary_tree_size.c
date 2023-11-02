#include "binary_trees.h"
/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: the tree whose size to measure
 * Return: return the size of the tree or NULL if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_nodes = 0;
	size_t right_nodes = 0;

	if (tree == NULL)
		return (0);
	left_nodes += binary_tree_size(tree->left);
	left_nodes += binary_tree_size(tree->right);
	return (1 + left_nodes + right_nodes);
}
