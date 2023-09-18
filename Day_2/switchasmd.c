#include<stdio.h>
int main()
{
    
char ch;
int num1,num2,res,ans;
printf("write a value of ch");
scanf("%c",&ch);
printf("write a values of num1,num2");
scanf("%d%d",&num1,&num2);

switch(ch)
{
    case 'a'  :
               ans = num1 + num2;
               printf("ans = %d",ans); 
               break;
    case  'b' : 
               ans = num1 - num2;
               printf("ans = %d",ans); 
               break;  
    case   'c'  : 
                ans = num1 * num2;
               printf("ans = %d",ans); 
               break;

    case   'e' :
                ans = num1 / num2;
               printf("ans = %d",ans); 
               break;
                                             

}
    return 0;
}