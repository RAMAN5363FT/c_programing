#include<stdio.h>
int prime ();
int main()
{
    int num,res=0;
     printf("\n enter a number : = ");
     scanf("%d",&num);

     res = prime(num);
     if (res == 0)
     printf("it is a prime number",num);
     else
     printf("it is not a prime number",num);


return 0;

}

int prime (int n)
{
    int i;
    for( i=2;i<=n/2;i++)
    {
        if(n%i!=0)
        continue;
           else
           return i;
    }
    return 0;
}