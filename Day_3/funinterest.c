#include<stdio.h>
float interest(float p, float r, float t)
{
    
    float si=(p * r * t) / 100;

    return si;
    

}
int main()
{
    float principle, rate , time;
float res;
    printf("Enter a principle amount = :" );
    scanf("%f",&principle);

    printf("Enter a rate of interest = :");
    scanf("%f",&rate);

    printf("Enter a time in years = :");
    scanf("%f",&time);

    res =  interest(principle,rate,time);
printf(" res = %f",res);
    return 0;
}

