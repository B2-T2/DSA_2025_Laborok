#include <stdio.h>
#include <stdlib.h>

#include "sort.h"

int main() {

    Student *arr = (Student*)malloc(CAPACYTY * sizeof(Student));
    if (!arr){printf("Nincs Array");return 5;}

    if (freopen("szesszio.txt","r",stdin)){printf("Nincs File");return 6;}
    int i=0;
    while (scanf("%[^,],%f\n"),arr[i].Neptun,&arr[i].average) {
        i++;
    }
    int n = i;

        // int n = sizeof(arr) / sizeof(arr[0]);
    //
    // heapSort(arr, n);
    //
    // printf("Sorted array is \n");
    printArray(&arr, n);
    free(arr);
    return 0;
}
