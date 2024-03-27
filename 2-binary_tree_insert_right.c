#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node = malloc(sizeof(binary_tree_t));
	/*binary_tree_t *temp;*/

	if (!new_right_node)
	{
		return (NULL);
	}
	if (parent == NULL)
	{
		free(new_right_node);
		return (NULL);
	}
	new_right_node->parent = parent;
	new_right_node->n = value;
	new_right_node->left = NULL;
	new_right_node->right = NULL;


	if (parent->right != NULL)
	{

		new_right_node->right = parent->right;
		parent->right->parent = new_right_node;

	}

	parent->right = new_right_node;
	return (new_right_node);
}
