#include<stdio.h>
int main()
{
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if(age>=18)
	{
	printf("eligible");
}
else
{
	printf("not eligible\n");
	printf("you are allowed to vote after %d years",18-age);
}
	return 0;
}