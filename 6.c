//Program to print if a year is leap year or not
#include<stdio.h>
#define LEAPY(year) (year%4==0)?printf("%d is a leap year",year):printf("%d is not a leap year",year)
int main()
{
	int year;
	printf("Enter a year :");
	scanf("%d",&year);
   LEAPY(year);
}

