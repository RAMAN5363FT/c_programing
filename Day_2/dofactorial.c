#include<stdio.h>
int main()
{
    int i = 1, fact = 1,a;
    printf("enter the number");
    scanf("%d",&a);
    do{
        fact = fact*i;
        i++;

    } while(i<=a);
    printf("factorial of given number is %d",fact);
    return 0;
}