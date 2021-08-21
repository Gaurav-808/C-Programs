//Program to Write down a macro to find the biggest of two numbers.Using macro,implement array sorting.
#include<stdio.h>
#define MAX(a,b) a>b?printf("%d is the biggest number",a):printf("%d is the biggest number",b)
int main() 
{
	int arr[2];
printf("Enter two numbers :");
scanf("%d %d",&arr[0],&arr[1]);
MAX(arr[0],arr[1]);
}
