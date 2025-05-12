//
// Created by palma on 5/5/2023.
//

#include "../headers/binary_tree.h"
#include <stdlib.h>
#include <stdio.h>
#include "../headers/constants.h"

Node *createNewNode(Konyv newData) {
    Node *newItem = (Node*) malloc(sizeof (Node));
    if(!newItem)
    {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
    newItem->info = newData;
    newItem->left = newItem->right = NULL ;
    return newItem;
}

Node *insertLeft(Node *root, Konyv newData) {
    root->left = createNewNode(newData);
    return root->left;
}

Node *insertRight(Node *root, Konyv newData) {
    root->right= createNewNode(newData);
    return root->right;
}

void kolcsonzes(Node *root) {
    if (root == NULL) return;
    inorderTraversal(root);

}

void preorderTraversal(Node *root) {
    if(root == NULL) return;
    printf("%s ", root->info);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node *root) {
    if(root == NULL) return;
    inorderTraversal(root->left);
    printf("%s ", root->info);
    inorderTraversal(root->right);
}


void postorderTraversal(Node *root) {
    if(root == NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%s ", root->info);
}

void destroyBinaryTree(Node **root) {
    if ((*root) != NULL) {
        destroyBinaryTree(&(*root)->left);
        destroyBinaryTree(&(*root)->right);
        free(*root);
        *root = NULL;
    }
}


void readOneBookFromFile(FILE*f,Konyv b) {

    fscanf(f,"%[^\n] %[^\n] %d %b",b.title,b.szerzo,&b.kiadasiEv,b.kolcson);
}