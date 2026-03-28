#include<stdio.h>
#include<stdlib.h>

// Node structure
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *temp, *newnode;
    int n, i, pos;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Create initial list
    for(i=0; i<n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    // Insert at specific position
    printf("Enter position to insert: ");
    scanf("%d", &pos);

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter new data: ");
    scanf("%d", &newnode->data);

    if(pos == 1)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        temp = head;
        for(i=1; i<pos-1 && temp!=NULL; i++)
        {
            temp = temp->next;
        }

        if(temp == NULL)
        {
            printf("Invalid position\n");
        }
        else
        {
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }

    // Traverse list
    printf("Linked List after insertion:\n");
    temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}