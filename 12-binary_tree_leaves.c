#include "binary_trees.h"
/**
 * binary_tree_leaves - count leaves in a binary tree
 * @tree: the tree whose leaves to count
 * Return: return number of trees or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n_leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		n_leaves++;
	}
	else
	{
		if (tree->left != NULL)
			n_leaves += binary_tree_leaves(tree->left);
		if (tree->right != NULL)
			n_leaves += binary_tree_leaves(tree->right);
	}
	return (n_leaves);
}
