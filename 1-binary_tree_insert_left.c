#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another
 * @parent: A pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	binary_tree_t *currentNode;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	if (parent->left != NULL)
	{
		currentNode = parent->left;
		parent->left = newNode;
		newNode->left = currentNode;
		currentNode->parent = newNode;
	} else
	{
		parent->left = newNode;
	}
	return (newNode);
}
