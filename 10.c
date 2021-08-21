//Program to print an array using macro
#include<stdio.h>
#define ARRAY(a,y) printf("The Elements of array are : ");\
                    for(i=0;i<y;i++)\
                    {\
                     printf("%d ",a);\
                     sum+=a;\
                    }\
                    printf("\nSum of elements of array is %d",sum);
int main()
{
    int i,arraysize,sum=0;
    printf("Enter the number of elements of an array : ");
    scanf("%d",&arraysize);
    int array[arraysize];
    printf("Enter the element of array\n");
    for(i=0;i<arraysize;i++)
    {
        scanf("%d",&array[i]);
    } 
     ARRAY(array[i],arraysize);
}