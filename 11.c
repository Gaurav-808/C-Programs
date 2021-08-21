//Program to write a generic function to swap 2 numbers using macros, and use it for different data types.
#include<stdio.h>
#define SWAP(datatype,function) datatype function(datatype *a, datatype *b)\
                                 {\
					datatype swap;\
					swap=*a;\
					*a=*b;\
				       *b=swap;\
				 }
SWAP(int,swapint);
SWAP(float,swapfloat);
SWAP(char,swapchar);
int main()
{
        int a=8,b=9;
	swapint(&a,&b);
printf("after swapping a=%d and b=%d \n",a,b);
       float d=3.678,e=9.786;
       swapfloat(&d,&e);
printf("after swapping d=%f and e=%f \n",d,e);
 char g='n',n='g';
 swapchar(&g,&n);
printf("after swapping g=%c and n=%c \n",g,n);
}
