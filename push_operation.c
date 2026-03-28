#include<stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int main()
{
    int value;

    // PUSH operation
    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter value to push: ");
        scanf("%d", &value);

        top = top + 1;
        stack[top] = value;

        printf("%d pushed into stack\n", value);
    }

    return 0;
}