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
 * @Return: returns the pointer to the right child otherwise return null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *rightChild = NULL;
    if (!parent)
        return(NULL);
    /**moving to the right node*/

    rightChild = binary_tree_node(parent, value);

    if (!rightChild)
        return(NULL);

    rightChild->right = parent->right;
    if (parent->right)
        parent->right->parent = rightChild;
    
    parent->right = rightChild;
    return(rightChild);
}