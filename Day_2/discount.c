#include<stdio.h> 
int main()
{
    int amount; 
    
    printf("Enter the amount"); 
    scanf("%d",&amount); 

    
    if(amount>=1500) 
    {
            
            printf("discount is 200"); 
    }
    else 
    {
            
            printf("No discout"); 
    } 
    return 0;
}
