#include<stdio.h>

int main()
{
    float length,breadth,per;
    printf("\n enter the length = ");
    scanf("%f",&length);
    printf("\n enter the breadth = ");
    scanf("%f",&breadth);

    per = (2*(length+breadth));

    printf(" \n area of perimeter of rectangle is = %f",per);
}
