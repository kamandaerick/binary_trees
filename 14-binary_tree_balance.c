#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * tree_height - claculates the height of a tree
 * @tree: pointer to the root node of that tree
 * Return: return the height of the tree
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (tree == NULL)
		return (0);
	left_h = tree_height(tree->left);
	right_h = tree_height(tree->right);
	if (left_h >= right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}

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
	left_height = (int)tree_height(tree->left);
	right_height = (int)tree_height(tree->right);
	b_factor = left_height - right_height;
	return (b_factor);
}
