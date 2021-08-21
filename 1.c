//Program to Write down a the macro to find out the biggest of two numbers.
#include<stdio.h>
#define MAX(a,b) a>b? printf("%d is the biggest number",a): printf("%d is the biggest number",b)
int main()
{
	int a,b;
printf("enter two numbers :");
scanf("%d %d",&a,&b);
MAX(a,b);
}
