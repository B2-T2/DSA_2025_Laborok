//
// Created by Balazs Tamas on 2025. 02. 17
//

#include "func.h.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum(int a,int b) {
    return a+b;
}

float min(float a, float b, float c) {
    if (a<b && a<c) {return a;}
    if (b<a && b<c) {return b;}
    return c;
}

float* allocateMemoryForArray1(int n) {
    float *arr= (float *) malloc(n * sizeof(float));
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

void printArray(int n, float *pArray, const char *output) {
    freopen(output, "w", stdout);
    for (int i = 0; i < n; i++) {
        printf("%f ", pArray[i]);
    }
    freopen("CON", "w",stdout);
}

void deallocateMemoryForArray(int **dpArray) {
    free(*dpArray);
}
void fillWithRandomNumbers(int n, float *pArray, int start, int end) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        pArray[i] =1/(float)(start+1+rand()%(end-start+1));
    }


bool isPrime (int number) {
    for (int i = 2; i < sqrt(number); i++) {
        if (number % i == 0) {return false;}
    }
    return true;
}
