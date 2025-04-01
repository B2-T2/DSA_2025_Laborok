//
// Created by oszti on 3/23/2025.
//

#include "circular_queue.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

void createQueue(int capacity, CircularQueue_t *queue) {
    queue->capacity = capacity;
    queue->elements = (int*)malloc(capacity*sizeof(int));
    if (!queue->elements) {perror("Memory allocation error!"); exit(-1);}
    queue->front = queue->rear = -1;
}
void destroyQueue(CircularQueue_t *queue) {
    free(queue->elements);
    queue->elements = NULL;
    queue->capacity = 0;
    queue->front = queue->rear = -1;
}
bool isFull(CircularQueue_t queue){
    return (queue.front == (queue.rear + 1) % queue.capacity);
 }
bool isEmpty(CircularQueue_t queue) {
    return (queue.front == -1);
}
void enqueue(CircularQueue_t *queue, int item) {
    if (isFull(*queue)) {
        printf("Queue is full!\n");
        return;
    }
    if (isEmpty(*queue)) {
        queue->front = 0;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->elements[queue->rear] = item;
}
GLASS dequeue(CircularQueue_t *queue) {
    if (isEmpty(*queue)) {
        printf("Queue is empty!\n");
        return glass0;
    }
    GLASS temp = queue->elements[queue->front];
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % queue->capacity;
    }
    return temp;
}
void display(CircularQueue_t queue) {
    printf("Poharak:\n");
    for (int i = queue.front; i <= queue.rear; ++i) {
        printOneGlass(queue.elements[i]);
    }
}
int peek(CircularQueue_t queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return INT_MIN;
    }
    return queue.elements[queue.front];
}
void printOneGlass(GLASS glass) {
    printf("%s %.2f %s\n",glass.color,glass.volum,getDescriptionType(glass.type));
}
char *getDescriptionType(enum Type type) {
    switch (type) {
    case 0: return "GLASS";
    case 1: return "PLASTIC";
    default: return "OTHER";
    }
}

