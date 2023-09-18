#include <stdio.h>
int main() {
    int num, digit, sum = 0;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
  

    while (num > 0) {
        digit = num % 10;  
        sum = sum + digit;      
        num /= 10;         
    }

    
    printf("The sum of the individual digits is: %d\n", sum);

    return 0;
}
