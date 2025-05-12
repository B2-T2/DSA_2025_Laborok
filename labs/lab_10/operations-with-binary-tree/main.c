#include <stdio.h>
#include "headers/binary_tree.h"




int main() {
    // Node *root = createNewNode(1);
    // insertLeft(root, 2);
    // insertRight(root, 3);
    // insertLeft(root->left, 4);
    // //1 2 3
    // insertRight(root->left, 5);
    // //insertLeft(root->left->left, 8);
    // insertRight(root->right, 9);
    // insertLeft(root->right, 6);
    // insertRight(root->right->right, 7);
    //
    // ///traversals
    // printf("\nPreorder: ");
    // preorderTraversal(root);
    // printf("\nInorder: ");
    // inorderTraversal(root);
    // printf("\nPostorder: ");
    // postorderTraversal(root);
    //
    // ///deallocate
    // destroyBinaryTree(&root);
    FILE*f=fopen("konyvek.txt","r");
    Konyv konyv;
    Node *root;
    int x=1;
    do {
        printf("Menu\n1. Add new book\n2. Lend book\n3. Return book\n4. List all books\nPress 0 to exit menu\n");
        scanf("%d",&x);
        switch (x) {
            case 1: {
                readOneBookFromFile(f,konyv);
                if(root->info.kiadasiEv==-1) {
                    root->info=konyv;
                }else if(konyv.kiadasiEv%2==0) {
                    insertLeft(root,konyv);
                }else insertRight(root,konyv);
                break;
            }
            case 2: break;
            case 3: break;
            case 4: break;
        }

    }while (x!=0);

    return 0;
}
