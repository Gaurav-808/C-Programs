//Program to print the biggest of three values.Try to call it and print the result for different data types,integer,float, double and character.
#include <stdio.h>
#define BIG(datatype, function)                           \
	datatype function(datatype a, datatype b, datatype c) \
	{                                                     \
		if (a > b && a > c)                               \
			return a;                                     \
		else if (b > c && b > a)                          \
			return b;                                     \
		else                                              \
			return c;                                     \
	}
BIG(int, bigint);
BIG(float, bigfloat);
BIG(char, bigchar);
int main()
{
	int a = 8, b = 9, c = 7;
	printf("%d is the biggest number\n", bigint(a, b, c));
	float d = 3.678, e = 9.786, f = 8.989;
	printf("%f is the biggest number\n", bigfloat(d, e, f));
	char g = 'd', h = 'n', n = 'g';
	printf("%c is the biggest character\n", bigchar(g, h, n));
}
