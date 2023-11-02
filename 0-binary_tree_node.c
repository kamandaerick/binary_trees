#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: the address of the parent node of a subtree
 * @value: the value of a node
 * Return: return the address of the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
