//
// Created by palma on 5/5/2023.
//

#ifndef BINARYTREE_BINARY_TREE_H
#define BINARYTREE_BINARY_TREE_H
#include <stdio.h>


typedef struct Konyv {
    char title[101];
    char szerzo[101];
    int kiadasiEv;
    bool kolcson;
}Konyv;

typedef struct Node{
    Konyv info;
    struct Node *left, *right;
}Node;
static const Konyv UresKonyv={"","",0,0};

/**
 * Allocate memory for a new node
 * @param newData
 * @return the allocated node item
 */
Node *createNewNode(Konyv newData);
/**
 * Insert a new node to the left of the root
 * @param root
 * @param newData
 * @return pointer to the inserted node
 */
Node *insertLeft(Node *root, Konyv newData);
/**
 * Insert a new node to the right of the root
 * @param root
 * @param newData
 * @return pointer to the inserted node
 */
Node *insertRight(Node *root, Konyv newData);

/**
 *
 * @param root
 */
void kolcsonzes(Node *root);
/**
 * ROOT-LEFT-RIGHT order of traversal
 * @param root
 */
 ///1, 2, 4, 8, 9, 5, 3, 6, 7
void preorderTraversal(Node *root);
/**
 * LEFT-ROOT-RIGHT order of traversal
 * @param root
 */
 ///8, 4, 9, 2, 5, 1, 6, 3, 7
void inorderTraversal(Node *root);
/**
 * LEFT-RIGHT-ROOT order of traversal
 * @param root
 */
 ///8, 9, 4, 5, 2, 6, 7, 3, 1
void postorderTraversal(Node *root);

/**
 * Deallocate memory
 * @param root
 */
void destroyBinaryTree(Node **root);


void readOneBookFromFile(FILE*f,Konyv b);

#endif //BINARYTREE_BINARY_TREE_H
