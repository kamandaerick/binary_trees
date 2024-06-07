#include "binary_trees.h"
#include "14-binary_tree_balance.c"
/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: return 1 of perfect and 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int bf;

	bf = binary_tree_balance(tree);
	if (bf == 0)
		return (1);
	else
		return (0);
}
