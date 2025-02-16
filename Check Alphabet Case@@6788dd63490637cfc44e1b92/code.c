#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    // Check if the character is uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n", ch);
    } else {
        printf("%c is neither uppercase nor lowercase.\n", ch);
    }

    return 0;
}
