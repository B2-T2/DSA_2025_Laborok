#include <stdio.h>
#include "headers/binary_tree.h"

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



int main() {
    Node *root = createNewNode(1);
    insertLeft(root, 2);
    insertRight(root, 3);
    insertLeft(root->left, 4);
    //1 2 3
    insertRight(root->left, 5);
    //insertLeft(root->left->left, 8);
    insertRight(root->right, 9);
    insertLeft(root->right, 6);
    insertRight(root->right->right, 7);

    ///traversals
    printf("\nPreorder: ");
    preorderTraversal(root);
    printf("\nInorder: ");
    inorderTraversal(root);
    printf("\nPostorder: ");
    postorderTraversal(root);

    ///deallocate
    destroyBinaryTree(&root);


    return 0;
}
