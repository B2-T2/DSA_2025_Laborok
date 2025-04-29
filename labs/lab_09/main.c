#include <stdio.h>

#include "simple_list_functions.h"
int main(void) {
    Node *egy =  newNode(2);
    Node *ketto = newNode(9);
    Node *harom = NULL;


    insertAtEnd(&egy,3);
    insertAtEnd(&egy,4);
    insertAtEnd(&ketto,8);
    insertAtEnd(&ketto,7);

    printList(egy);
    printf("\n");
    printList(ketto);
    printf("\n");
    //printf("%i",checkEnd(&egy));

    add


    // for (int i = 0; i < 3; i++) {
    //     int x;
    //     scanf("%i",&x);
    //     insertAtEnd(&egy,x);
    // }
    // for (int i = 0; i < 3; i++) {
    //     int x;
    //     scanf("%i",&x);
    //     insertAtEnd(&ketto,x);
    // }


    return 0;
}
