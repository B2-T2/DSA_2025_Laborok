//
// Created by Balazs Tamas on 2025. 05. 27..
//

#ifndef SORT_H
#define SORT_H
#define CAPACYTY 90


typedef struct Student {
    char Neptun[7];
    double average;
}Student;

void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);
void printArray(Student arr[], int n);

#endif //SORT_H
