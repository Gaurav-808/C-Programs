//Progrm to print a range of prime numbers.Use macro, to find a number is prime or not.
#include<stdio.h>
#define PRIME(a) for(i=0;a>=1;a--)\
                  {\
			 if( b%a==0)\
		  i++;\
		  }
int main()
{
	int a,b,i;
printf("Enter a number : ");
scanf("%d",&a);
b=a;
PRIME(a);
if(i==2)
	printf("%d is a prime number : ",b);
else
	printf("%d is not a prime number : ",b);
}
