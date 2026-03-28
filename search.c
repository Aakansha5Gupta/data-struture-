#include <stdio.h>
int main()
{
    int arr[10],n,i,value;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter elements are:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter value to search:");
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            printf("element is found at index %d",i);
            return 0 ;
        }
    }
    printf("elements not found");
    return 0 ;
}