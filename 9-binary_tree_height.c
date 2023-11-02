#include "binary_trees.h"
/**
 * binary_tree_height - mesaure the height of a binary tree
 * @tree: the tree whose height to measure
 * Return: return the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		size_t right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return (left_height > right_height ? left_height : right_height);
	}
	return (0);
}
