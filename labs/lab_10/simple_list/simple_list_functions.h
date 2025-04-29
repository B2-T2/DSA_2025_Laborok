//
// Created by oszti on 3/30/2025.
//

#ifndef SIMPLE_LIST_FUNCTIONS_H
#define SIMPLE_LIST_FUNCTIONS_H
#include <stdbool.h>
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
    struct Node* next;
}Node;

/**
 * Allocates memory for a new node
 * @param new_data
 * @return pointer to a new allocated node
 */
Node* newNode(Barat new_data);

/**
 * Checks if list is empty, head is NULL pointer
 * @param head
 * @return true/false
 */
bool isEmpty(Node *head);

/**
 * Insert new node at the beginning of the list
 * @param head_ref
 * @param new_data
 */
void insertAtBeginning(Node** head_ref, Barat new_data);

/**
 * Insert new node after a specific node
 * @param prev_ref
 * @param new_data
 */
void insertAfter(Node* prev_ref, Barat new_data);

/**
 * Insert new node at the end of the list
 * @param head_ref
 * @param new_data
 */
void insertAtEnd(Node** head_ref, Barat new_data);
/**
 * Prints the elements of the linked list
 * @param head Pointer to the head of the list
 */
void printList(Node* head);

#endif //SIMPLE_LIST_FUNCTIONS_H
