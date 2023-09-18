#include<stdio.h>

int main()
{
    int n,n1,n2,n3,d1,d2,d3,d4;
    printf("\n enter four digit");
    scanf("%d", &n);
    d1= n %10;
    n1 = n/10;
   
    d2= n1%10;
    n2 = n1/10;
  
    d3 = n2%10;
    n3 = n2/10;

    printf("\n addition of first and last term = %d",d1+n3);

    return 0;
}