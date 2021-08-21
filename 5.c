//Program to print if a character is alphanumeric,using macro.
#include<stdio.h>
#define ALPHA(ch) ((ch >='a' && ch <='z') || (ch >='A' && ch<='Z') || (ch>='0' && ch<='9'))
int main()
{
char ch;
printf("Enter a character : ");
scanf(" %c",&ch);
if(ALPHA(ch))
	printf("%c is an alphanumeric charcater",ch);
else
	printf(" %c is not an alphanumeric character",ch);

}
