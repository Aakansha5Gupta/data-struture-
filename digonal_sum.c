#include<stdio.h>
int main()
{
    int arr[3][3], i, j, sum = 0;

    printf("Enter 3 X 3 matrix:\n");

    // Input
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Diagonal elements are:\n");

    // Diagonal + Sum
    for(i = 0; i < 3; i++)
    {
        printf("%d ", arr[i][i]);
        sum = sum + arr[i][i];   // IMPORTANT LINE
    }

    printf("\nSum = %d\n", sum);   // IMPORTANT LINE

    return 0;
}