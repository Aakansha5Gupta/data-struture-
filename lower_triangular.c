#include<stdio.h>
int main()
{
    int arr[3][3], i, j;

    printf("Enter 3 X 3 matrix:\n");

    // Input
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Lower Triangular Matrix:\n");

    // Lower triangular
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j <= i)
                printf("%d ", arr[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}