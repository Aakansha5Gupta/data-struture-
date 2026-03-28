#include<stdio.h>
int main()
{
    int arr[]={10,5,2,15,19},i,j,n;
    n=sizeof(arr[0]);
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    printf("\n sorted array:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0 ;
}