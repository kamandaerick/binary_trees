#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes with at least one child
 * @tree: tree whose nodes to traverse
 * Return: number of nodes with children or NULL if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		n_nodes++;
	n_nodes += binary_tree_nodes(tree->right);
	n_nodes += binary_tree_nodes(tree->left);
	return (n_nodes);

}
