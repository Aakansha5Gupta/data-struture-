#include <stdio.h>
 int main()
 {
     int arr[10],i,n,sum=0;
     printf("enter number of elements:");
     scanf("%d",&n);
     printf("enter elements are:");
     for(i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
     }
     printf("the sum of elements is:%d",sum);
     return 0 ;
 }