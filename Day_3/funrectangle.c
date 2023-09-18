#include<stdio.h>
int func(int a, int b)
{
    int area = a*b;
    
    return area;
}
int main()
{
    int res;
    int length,breadth;
    printf("enter the length : ");
    scanf("%d",&length);
    printf("enter the breadth : ");
    scanf("%d",&breadth);
res = func(length,breadth);
printf("area of rectangle : %d",res);

    return 0;
}
