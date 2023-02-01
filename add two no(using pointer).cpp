#include <stdio.h>
int main()
{
   int first, second, *p, *q, sum;
   printf("input first number:\n");
   scanf("%d", &first);
   printf("input second number:");
   scanf("%d",&second);
   p = &first;
   q = &second;
   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);
  return 0;
}