#include<stdio.h>
int main()
{
    char ch;

    printf("enter the character");
    scanf("%c",&ch);

    if (ch=='a' || ch=='e'||ch =='i' ||ch== '0' ||ch== 'u' )
    {
        printf("it is  a vowel");
    }

        else 
        { 
            printf("it is character");

        }
    
    return 0;
}