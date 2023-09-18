#include<stdio.h>

int main()
{
    float height,radius;
    float res;

    printf("\n enter the the values of height and radius");
      scanf("%f%f",&height,&radius);

      res = 2*3.14*radius*height;

      printf("\nsurface of cyclinder = %f",res);

}