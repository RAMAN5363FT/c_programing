#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2)
        goto num1_is_greater;
    else
        goto num2_is_greater;

num1_is_greater:
    printf("The greater number is: %d\n", num1);
    goto end;

num2_is_greater:
    printf("The greater number is: %d\n", num2);

end:
    return 0;
}
