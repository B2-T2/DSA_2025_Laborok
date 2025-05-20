//
// Created by palma on 5/8/2023.
//



#include "hash_table.h"

#include <string.h>

int hashCode(int key) {
    return key % CAPACITY;
}

HashItem createHashItem(int key, float data, char NEPTUN[7])
{

    HashItem item;
    item.key = key; item.data = data; strcpy(item.NEPTUN,NEPTUN);//TODO
    return item;
}
void createHashArray(HashTable *pHashTable) {
    pHashTable->items = (HashItem*)calloc(CAPACITY, sizeof(HashItem));//TODO
    if(!pHashTable->items)
    {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
    for (int i = 0; i < CAPACITY; ++i) {
        {
            pHashTable->items[i] = dummyData;
        };//TODO
    }
    pHashTable->size = 0;
}

void insert(HashTable *hashTable, int key, float data, char NEPTUN[7]) {
    if(hashTable->size >= CAPACITY) return;
    int index = hashCode(key);//TODO
    int i = 0;
    while (hashTable->items[(index + i)%CAPACITY].key != dummyData.key)
    {
        {
            i++;
        };//TODO
    }
    hashTable->items[(index+i)%CAPACITY] = createHashItem(key, data, NEPTUN);
    hashTable->size++;
}

void display(HashTable hashTable) {
    if(hashTable.size ==0) {//TODO
        printf("The table is empty\n");
        return;
    }
    printf("The hash table:\n\tpos\t:\tkey\tvalue\t->\tmod\n");
    for (int i = 0; i < CAPACITY; ++i) {
        if(hashTable.items[i].key != dummyData.key)
        {
            printf("\t%i\t:\t%i\t%.2f\t->\t%i \t%s\n", i, hashTable.items[i].key, hashTable.items[i].data, hashCode(hashTable.items[i].key), hashTable.items[i].NEPTUN);
        }
    }
}

int size(HashTable hashTable) {
    return hashTable.size;
}

void delete(HashTable *hashTable, int key) {
    int index = hashCode(key);
    if (hashTable->items[index].key == dummyData.key)
    {
        printf("\n This key does not exist \n");
        return;
    }
    int i = 0;
    while(hashTable->items[(index+i)%CAPACITY].key != key && i < CAPACITY)
    {
        i++;
    }
    if(i == CAPACITY)
    {
        printf("\n This key does not exist \n");
        return;
    }
    hashTable->items[(index+i)%CAPACITY] = dummyData;
    hashTable->size--;
    printf("\n Key (%d) has been removed \n", key);
}

int search(HashTable hashTable, int key) {
    int index = hashCode(key);
    if (hashTable.items[index].key == dummyData.key)
    {
        return -1;
    }
    int i = 0;
    while(hashTable.items[(index+i)%CAPACITY].key != key && i < CAPACITY)
    {
        i++;
    }
    if(i == CAPACITY) return -1;
    return (index+i)%CAPACITY;
}

void destroyHashArray(HashTable *pHashTable) {
    pHashTable->size = 0;//TODO
    free(pHashTable->items);
    pHashTable = NULL;
}


