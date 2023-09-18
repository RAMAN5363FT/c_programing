#include<stdio.h>
int main()
{
    int amount, total; 
    int dis = 200;
    
    printf("Enter the amount"); 
    scanf("%d",&amount); 

    if(amount>1500)
    {
        total = amount+dis;
        printf("total amout%d",total);
    } 
    return 0;
}