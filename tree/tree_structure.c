#include <stdio.h>
#include <stdlib.h>
#include "tree_structure.h"


static BinaryNode * AllocBinaryNode(void) {
    return calloc(1, sizeof(BinaryNode));
}

static void SetBinaryNode(BinaryNode *node, int *data, const BinaryNode *left,
                                                    const BinaryNode *right)
{ 
    node->data = *data;
    node->left = left;
    node->right = right;
}

/* TODO: ADD MORE FEATURES */
BinaryNode *Search(BinaryNode *node, int *x){
    if (node == NULL) {

        return NULL;
    }
    else if (node->data == *x) {
        // search succeed
        return node;
    }
    else if (node->data >= *x) {
        Search(node->left, x);
    } else {
        Search(node->right, x);
    }
}