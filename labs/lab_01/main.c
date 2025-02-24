#include <stdio.h>

#include "func.h.h"

int main(void) {
    printf("%i\n",sum(1,2));
    printf("%f\n",min(1.2,23,3.4));
    int *p= allocateMemoryForArray1(12);
    printf("\n");
    int *t;
    int x=2;
    readArray(&x,&t,"Be.txt");
    printArray(x,t,"Ki.txt");
    deallocateMemoryForArray(&t);
    deallocateMemoryForArray(&p);
    return 0;
}

