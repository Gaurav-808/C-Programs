//program to write different messaages based on operating system
#include<stdio.h>
#ifndef Q
#warning "Please define Q"
#endif
int main()

{
    #if(Q==1)
    printf("WELCOME to Windows");
    #elif(Q==2)
    printf("WELCOME to LINUX");
    #elif(Q==3)
    printf("WELCOME to MAC");
    #endif
    return 0;
}