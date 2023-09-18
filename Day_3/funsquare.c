#include<stdio.h>
int func(int);

int main()
{
    int no,square;
    printf("enter the number : ");
    scanf("%d",&no);
square = func(no);
printf("square of number is : %d",square);

    return 0;
}
int func(int temp)
{
    int res;
    res = temp*temp;
    return res;
}