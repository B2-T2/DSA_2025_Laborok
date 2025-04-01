#include <stdio.h>
#include "circular_queue.h"

int main(void)
{
    GLASS glass;
    CircularQueue_t t;
    freopen("pohar.txt","r",stdin);
    createQueue(5,&t);
    enqueue(&t,glass);
    enqueue(&t,glass);
    display(t);
    return 0;
}