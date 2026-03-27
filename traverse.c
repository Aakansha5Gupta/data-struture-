#include <stdio.h>
int main()
{
    int arr[10],i,n;
    printf("enter number of elements :");
    scanf("%d",&n);
    printf("enter elements are:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the elements are:");
    for(i=0;i<n;i++)
    {
        printf("\n %d",arr[i]);
    }
    return 0 ;
}