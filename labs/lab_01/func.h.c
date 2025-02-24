//
// Created by Balazs Tamas on 2025. 02. 17
//

#include "func.h.h"
#include <stdio.h>
#include <stdlib.h>

int sum(int a,int b) {
    return a+b;
}

float min(float a, float b, float c) {
    if (a<b && a<c) {return a;}
    if (b<a && b<c) {return b;}
    return c;
}

int* allocateMemoryForArray1(int n) {
    int *arr= (int *) malloc(n * sizeof(int));
    if (!arr){printf("Memory allocation error");exit(0);}
    return arr;
}

void allocateMemoryForArray2(int n, int **dpArray) {
    *dpArray = (int *) malloc(n * sizeof(int));
    if (!(*dpArray)){printf("Memory allocation error");exit(0);}
}

void readArray(int *pn, int **dpArray, const char *input) {
    if (!freopen(input, "r",stdin)){exit(-2);}
    scanf("%i", pn);
    //Sajat
    allocateMemoryForArray2(*pn, dpArray);
    //Sajat
    for (int i = 0; i < *pn; i++)
    {
        scanf("%c", &((*dpArray)[i]));
        //printf("%c", (*dpArray)[i]);
    }
}

void printArray(int n, int *pArray, const char *output) {
    freopen(output, "w", stdout);
    for (int i = 0; i < n; i++) {
        printf("%c", pArray[i]);
    }
    freopen("CON", "w",stdout);
}

void deallocateMemoryForArray(int **dpArray) {
    free(*dpArray);
}