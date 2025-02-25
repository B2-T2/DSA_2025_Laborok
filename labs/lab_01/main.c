#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "func.h.h"

int main(void) {
    int n;
    scanf("%i",&n);
    float *t = allocateMemoryForArray1(n);
    fillWithRandomNumbers(n,t,0,100);
    printArray(n,t,"Ki.txt");
    printf("%f",min(t[0],t[n/2],t[n-1]));
    free(t);
    return 0;
}

