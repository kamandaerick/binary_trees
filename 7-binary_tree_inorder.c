#include "binary_trees.h"
/**
 * binary_tree_inorder - traverse a tree using in-order traversal
 * @tree: the tree to traverse
 * @func: the function to call at each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
