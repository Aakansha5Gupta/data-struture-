#include<stdio.h>
#define MAX 5

int stack[MAX] = {10, 20, 30}; // already some elements
int top = 2; // last index (30 is on top)

int main()
{
    // POP operation
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d popped from stack\n", stack[top]);
        top = top - 1;
    }

    return 0;
}