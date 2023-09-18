#include<stdio.h>

int main()
{
    int add,sub,mul,div;
    int a,b,c,d,e,f,g,h;
    
    printf("\n addition of two number = ");
    scanf("%d%d",&a,&b);
    add = a+b;
    printf("result of addition is = %d",add);
    
    
    printf("\n substraction of two number =");
    scanf("%d %d",&c,&d);
    sub = c-d;
    printf("\n result of substraction is%d",sub);

    printf("\n multiplication of two number ");
    scanf("%d %d",&e,&f);
    mul = e*f;
    printf("\n result of multiplication is = %d",mul);

    printf("\n division of two number is = ");
    scanf("%d %d", &g,&h);
    div = g/h;
    printf("\n result of division is %d",div);
 return 0;

}