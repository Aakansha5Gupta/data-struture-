#include<stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int main()
{
    int value;

    // ENQUEUE operation
    if(rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Enter value to enqueue: ");
        scanf("%d", &value);

        if(front == -1)   // first element
            front = 0;

        rear = rear + 1;
        queue[rear] = value;

        printf("%d inserted into queue\n", value);
    }

    return 0;
}