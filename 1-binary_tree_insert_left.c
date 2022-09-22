#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 * 
 * @Return: returns the pointer to the left child otherwise return null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *leftNode = NULL;
    if (!parent)
        return (NULL);

    /** going to the left*/
    leftNode = binary_tree_node(parent, value);
    if (!leftNode)
        return(NULL);

    leftNode->left = parent->left;
    if (parent->left)
        parent->left->parent=leftNode;
    parent->left = leftNode;
    return(leftNode);
}
