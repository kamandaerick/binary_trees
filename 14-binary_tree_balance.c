#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - calculates the balance factor of a b tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int b_factor;
	size_t left_height;
	size_t right_height;

	if (!tree)
		return (0);
	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);
	b_factor = left_height - right_height;
	return (b_factor);
}
