#include <stdio.h>

int main() {
    double num1, num2, num3, num4, num5;

    printf("Enter five numbers: ");
    scanf("%lf %lf %lf %lf %lf", &num1, &num2, &num3, &num4, &num5);

    double max = num1; 

    if (num2 > max)
        max = num2;

    if (num3 > max)
        max = num3;

    if (num4 > max)
        max = num4;

    if (num5 > max)
        max = num5;

    printf("The greatest number is: %.2lf\n", max);

    return 0;
}
