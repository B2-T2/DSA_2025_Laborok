#include <stdio.h>

#include "stack.h"

int main(void) {
    freopen("Be.txt", "r",stdin);
    if (!freopen("Be.txt", "r",stdin)) {
        printf("Error");
        return 1;
    }
    int n;
    scanf("%d", &n);
    Stack stack;
    createStack(10,&stack);
    for (int i = 0; i < n; i++) {
        scanf("%c",&stack.elements[i]);
        push(&stack, i);
    }

    return 0;
}
