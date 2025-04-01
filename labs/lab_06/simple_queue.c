//
// Created by Balazs Tamas on 2025. 03. 25..
//

#include "simple_queue.h"

#include <stdio.h>
#include <stdlib.h>


void createQueue(int capacity, Simple_Queue_t *queue) {
    queue->capacity = capacity;
    queue->front = queue->rear = -1;
    queue->elements = (int *) calloc(queue->capacity, sizeof(int *));
    if (!queue->elements) {
    printf("MEMORY_ALLOCATION_ERROR_MESSAGE");
    exit(-1);
    }
}
void destroyQueue(Simple_Queue_t *queue) {
    free(queue->elements);
    queue->front = queue->rear = -1;
    queue->capacity = 0;
    queue = NULL;
}

bool isFull(Simple_Queue_t queue) {
return queue.front == 0 && queue.rear == queue.capacity-1 || queue.rear ==
queue.front-1;
}


bool isEmpty(Simple_Queue_t queue) {
    return queue.front == -1;
}

void enqueue(Simple_Queue_t *queue, const char *item) {
    if(isFull(*queue)) {
        printf("FULL_MESSAGE");
        return;
    }
    if(isEmpty(*queue)) {
    queue->front = 0;
    }
    queue->elements[++queue->rear]=item;
}

char *dequeue(Simple_Queue_t *queue) {
    if(isEmpty(*queue)) {
        printf("EMPTY_MESSAGE");
        return NULL;
    }
    int pos = queue->front;
    if(queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    }
    else {
        queue->front++;
    }
    return queue->elements[pos];
}

void display(Simple_Queue_t queue) {
    if (isEmpty(queue)) {
    printf("The queue is ");
    printf("EMPTY_MESSAGE");
    return;
    }
    printf("The cars’ plate number are the following:\n");
    for (int i = queue.front; i <= queue.rear; ++i) {
    printf("%s\n", queue.elements[i]);
    }
}
