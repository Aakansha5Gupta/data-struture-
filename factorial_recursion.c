#include<stdio.h>

// Recursive function
long long factorial(int n)
{
    if(n == 0 || n == 1)   // base case
        return 1;
    else
        return n * factorial(n - 1);  // recursive call
}

int main()
{
    int n;
    long long result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = factorial(n);

    printf("Factorial of %d = %lld", n, result);

    return 0;
}