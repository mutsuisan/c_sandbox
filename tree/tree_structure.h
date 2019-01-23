#ifndef __BinaryTree
#define __BinaryTree


typedef struct __binarynode {
    struct __binarynode *left;
    struct __binarynode *right;
    int data;
} BinaryNode;

BinaryNode *Search(BinaryNode *node, int *data);

BinaryNode *Add(BinaryNode *node, int *data);

int Remove(BinaryNode *node, int *data);

void PrintTree(BinaryNode *node);

void FreeTree(BinaryNode *node);

#endif