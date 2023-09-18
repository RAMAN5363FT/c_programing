#include<stdio.h>
int main()
{
    float math,sci,geo,his,marathi;
    float a,b,c,d,e,f;

float total,avg;
    printf("\n enter the marks of subject math,sci,geo,his,marathi");
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);

    printf("\n math = %f\n sci = %f\n geo = %f\n his = %f\n marathi = %f\n",a,b,c,d,e,f);

    total = a+b+c+d+e;

    avg = total/5;

    printf("\n average of five subject is = %f",avg);
    
         return 0;
}