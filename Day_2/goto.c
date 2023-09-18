#include<stdio.h>
int main()
{
    int a,b,c,e, d;
    a= 5;
    b =10;
    c = a+b;
    printf("print value of c  = %d\n",c);

    goto  jump;
    d = a-b;
    printf("print value of d =  %d\n",d);

 jump:
e = a/b;
printf("print the value of e = %d\n",e);


    return 0;
}