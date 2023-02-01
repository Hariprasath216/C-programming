#include <stdio.h>
int main()
 {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("the given number is even.", num);
    else
        printf("the given number is odd.", num);
    
    return 0;
}