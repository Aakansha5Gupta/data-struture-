#include<stdio.h>
int main()
{
    int arr[10],i,n,min;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("minimum element is :%d ",min);
    return 0 ;
}