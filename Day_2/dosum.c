#include<stdio.h>
int main()
{
    int i =1, sum =0;

    do 
    {
        sum = sum+i;
        i++;

    }while(i<=10);
    printf("\n sum of all natural no %d",sum);
   
       

    return 0;
}