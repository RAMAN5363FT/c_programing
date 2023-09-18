#include<stdio.h>
int main()
{
    float add,sub,div,mul;
    int num1,num2;

    printf("\n print value of num1,num2");
    scanf("%d%d",&num1,&num2);

add = num1+ num2;
printf("\n Add: %.2f",add);

    sub= num1- num2;
    printf("\n Sub: %f",sub);

    mul = num1*num2;
    printf("\n Mul: %f",mul);

    div = num1/num2;
    printf("\n Div: %f",div);

    
       return 0;
}
    
