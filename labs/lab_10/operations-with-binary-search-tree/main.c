#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "headers/binary_search_tree.h"

int main() {
    // int items[] = {7, 5, 12, 3, 6, 9, 15, 1, 4, 8, 10, 13, 17};
    // int n = 13;
    // for (int i = 1; i < n; ++i) {
    //     insert(root, items[i]);
    // }

    // srand(time(NULL));
    // int x = 0 + rand() % (100 + 1);
    // Node *root = createNewNode(x);
    // for (int i = 0; i < 15; i++) {
    //     int x1 = 0 + rand() % (100 + 1);
    //     insert(root,x1);
    // }
    freopen("data.txt", "r", stdin);
    Barat uj;
    Node *root=NULL;
    while ((scanf("%[^;];%d;%d;%d;%c;%d\n",
           uj.nev,
           &uj.szuletesiDatum.ev,
           &uj.szuletesiDatum.honap,
           &uj.szuletesiDatum.nap,
           &uj.nem,
           &uj.bulizas) != EOF)) {

            if(root==NULL) {
                root = createNewNode(uj);
            }
            else
            {
                insert(root,uj);
            }
    }
    inorderTraversal(root);


    return 0;
}
