#include "binary_trees.h"
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
/**
 * binary_tree_is_full - Check if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 1 if full and 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);
        if ((tree->left == NULL && tree->right != NULL) ||
                        (tree->left != NULL && tree->right == NULL))
                return (0);
        if (tree->left == NULL && tree->right == NULL)
                return (1);
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
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
	int full;

	bf = binary_tree_balance(tree);
	full = binary_tree_is_full(tree);
	if (full == 1 && bf == 0)
		return (1);
	else
		return (0);
}
