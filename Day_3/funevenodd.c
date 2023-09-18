#include<stdio.h>
 void evenodd( ); 
int main()
{
    int n ;
    int res;

      evenodd();


    return 0;

}

void evenodd()
{
    
int x;
printf("print value of x");
scanf("%d",&x);

    if (x % 2 == 0)
    {
    printf("even");
    }
    else
    {
        printf("odd");
    }
}