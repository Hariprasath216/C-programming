#include<stdio.h>
int main()
{
     float n,square,cube;
     printf("Enter the number: ");
     scanf("%d", &n);
     square = n * n;
     cube = n * n * n;
     printf("Square of the number : %ld", square);
     printf("\nCube of the number : %ld", cube);
     return 0;
}