#include <stdio.h>

int main() {
    int count = 1;

loop_start:

    if (count > 5)
        goto loop_end;

    printf("%d\n", count);
    count++;

    goto loop_start;

loop_end:
    return 0;
}
