#include<stdio.h>
int main()
{
    int num,i=1,count=0;
    printf("enter the num");
    scanf("%d",&num);

    while(i<=num)
    {
        if(num%i==0)
        {
            count++;
        }
    

    i++;
}
 if(count==2)
{
   printf("it is prime number");
}
else{
    printf("it is not a prime  number");
}

    return 0;
}