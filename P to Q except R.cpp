#include <stdio.h>
int main() 
{
    int p,q,r,i,c=0;
    printf("enter p ");
    scanf("%d",&p);
    printf("enter q ");
    scanf("%d",&q);
    printf("enter r ");
    scanf("%d",&r);
    for(i=p;i<=q;i++)
      {
          if(c!=r)
             {
                 printf("%d\n",i);
                 c++;
                 }
          else
             {
                 c++;
                 continue;
             }
          
      }

    return 0;
}