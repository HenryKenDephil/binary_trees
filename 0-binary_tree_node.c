#include "binary_trees.h"
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 * @n: the value or data entered
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNde;
    newNde = malloc(sizeof(binary_tree_t));
    if (!newNde)
        return NULL;

    newNde->parent = parent;
    newNde->left = NULL;
    newNde->right = NULL;
    newNde->n = value;

    return (newNde);
}