#include<stdio.h>
#define MAX 5

int queue[MAX] = {10, 20, 30}; // already some elements
int front = 0, rear = 2; // queue has 3 elements

int main()
{
    // DEQUEUE operation
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("%d deleted from queue\n", queue[front]);
        front = front + 1;
    }

    return 0;
}