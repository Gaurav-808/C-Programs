//Program to write a macro to find of three numbers,using biggest of two numbers macro.
#define BIG2(a,b)  (a)>(b)?(a):(b)
#define BIG3(a,b,c) BIG2((a),(BIG2(b,c)))
int main()
{
	int a,b,c;
printf("enter three numbers :");
scanf("%d %d %d",&a,&b,&c);
printf("%d is the biggest number",BIG3(a,b,c));
}
