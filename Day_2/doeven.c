#include<stdio.h>
int main()
{
    int i = 10;
    do{
        if(i%2==0)
       printf ("even no %d\n",i);
       else
       printf("oddno%d\n",i);
       
       i--;


        
    }
    while(i>=1);
    return 0;
}