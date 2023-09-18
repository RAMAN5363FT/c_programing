#include<stdio.h>
int addition(int x , int y ); 
int main()  
{
    
    int num1 = 1; 
    int num2 = 2; 
    int result; 
    result = addition( num1 , num2 );  
     
    printf("Result = %d",result); 
    return 0;
}

int addition(int x , int y ) 
{
    
    int z; 
    z = x + y; 


    return z;     
}
