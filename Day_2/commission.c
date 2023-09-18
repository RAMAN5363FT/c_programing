#include<stdio.h>
int main()
{
    float sale,comm;

    printf("enter the sale ");
    scanf("%f",&sale);

    comm = sale*15/100;

    printf("print comm amount%f",comm);



    return 0;
}