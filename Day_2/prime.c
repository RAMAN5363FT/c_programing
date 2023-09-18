#include<stdio.h>
int main()
{
    int num;
    int count = 0;
    printf("enter the number");
    scanf("%d",&num);

    for(int i=1;i<num;i++)
    {
        count++;
    }
    if(count==2)
    {
        printf("prime");
    }
    else
    {
            printf("not a prime");
    }
    return 0;
}