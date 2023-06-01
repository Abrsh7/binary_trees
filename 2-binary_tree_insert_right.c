#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent : pointer to the parent node of the node to create
 * @value : value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_right_child;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	old_right_child = parent->right;
	parent->right = new_node;
	if (old_right_child != NULL)
	{
		new_node->right = old_right_child;
		old_right_child->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
