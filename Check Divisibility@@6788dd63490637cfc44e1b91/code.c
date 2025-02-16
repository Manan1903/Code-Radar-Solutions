#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    // Check if the number is divisible by both 5 and 11
    if (num % 5 == 0 && num % 11 == 0) {
        printf("Divisible\n", num);
    } else {
        printf("Not Divisible\n", num);
    }

    return 0;
}
