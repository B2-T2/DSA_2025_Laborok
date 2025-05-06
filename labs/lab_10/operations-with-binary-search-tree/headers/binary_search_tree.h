//
// Created by palma on 5/5/2023.
//

#ifndef BINARYSEARCHTREE_BINARY_SEARCH_TREE_H
#define BINARYSEARCHTREE_BINARY_SEARCH_TREE_H

typedef struct Datum {
    int ev;
    int honap;
    int nap;
} Datum;
typedef struct Barat {
    char nev[100];
    Datum szuletesiDatum;
    char nem;
    int bulizas;
} Barat;
typedef struct Node{
    Barat data;
    struct Node *left, *right;
}Node;

/**
 * Allocate memory for a new node
 * @param newData
 * @return the allocated node item
 */
Node *createNewNode(Barat newData);

/**
 * Insert new node
 * @param node
 * @param key
 * @return the inserted node
 */
Node * insert(Node *node, Barat key);
/**
 * LEFT-ROOT-RIGHT order of traversal
 * @param root
 */
void inorderTraversal(Node *root);
/**
 * Find the min element
 * @param node
 * @return pointer to the min element
 */
Node * minValueNode(Node *node);
/**
 * Find the max element
 * @param node
 * @return pointer to the max element
 */
Node * maxValueNode(Node *node);
/**
 * Delete a specific node
 * @param root
 * @param key
 * @return the new node
 */
Node *deleteNode(Node *root, Barat key);
/**
 * Deallocate memory
 * @param root
 */
void destroyBinaryTree(Node **root);


#endif //BINARYSEARCHTREE_BINARY_SEARCH_TREE_H
