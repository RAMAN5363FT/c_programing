#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);  

    printf("Vowels in the string: ");
    
    
    for (i = 0; i < strlen(str); i++)
    
     {
        char ch = str[i];
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
             {
            printf("%c ", ch);
        }
    }

    return 0;
}
