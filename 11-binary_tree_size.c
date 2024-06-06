#include "binary_trees.h"
/**
 * binary_tree_size - calculate the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: size of the tree or NULL if tree is null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;
	size_t left_nodes, right_nodes;

	if (!tree)
		return (0);

	left_nodes = binary_tree_size(tree->left);
	right_nodes = binary_tree_size(tree->right);
	size = left_nodes + right_nodes + 1;
	return (size);
}
