#include<stdio.h>
int main()
{
    int num;
    printf("enter a num");
    scanf("%d",&num);

    if (num%8==0 && num%5==0)
     {
        printf("number is divisible by 8 and 5 ");
    }
    else if(num%8==0)
    {
        printf("number is divisible by 8 0nly");
    }
    else if(num%5==0)
    {
        printf("num is only divisible by 5 only");
    }
    else
    {
         printf("num is not divisible by 8 and 5 ");
    }

    return 0;
}