//
// Created by Balazs Tamas on 2025. 03. 25..
//

#define MAX = 12;
#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

void createStack(int capacity, Stack * stack) {
    stack->capacity = capacity;
    stack->top = -1;
    stack->elements = (char*)malloc(stack->capacity * sizeof(char));
    if (stack->elements == NULL) {
        printf("Memory allocation error\n");
        exit(1);
    }
}

void destroyStack(Stack* stack) {
    free(stack->elements);
}

bool isFull(Stack stack) {
    return stack.top == stack.capacity - 1;
}

bool isEmpty(Stack stack) {
    return stack.top == -1;
}

void push(Stack* stack, int item) {
    if (isFull(*stack)) {printf("No More Room");}
    stack->elements[++(stack->top)] = item;
}

char pop(Stack* stack) {
    if (isEmpty(*stack)) {printf("empty");}
    return stack->elements[(stack->top)--];
}

int peek(Stack stack) {
    if (isEmpty(stack)) {printf("empty");}
    return stack.elements[stack.top];
}

int size(Stack stack) {
    return stack.top + 1;
}
