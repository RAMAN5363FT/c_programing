#include<stdio.h>
int main()
{
    int sum = 0;
    int num;
      int i;
    printf("enter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if (num%i==0)
        {
            sum = sum + i;

        }
    }
            printf("%d",sum);
    return 0;
}