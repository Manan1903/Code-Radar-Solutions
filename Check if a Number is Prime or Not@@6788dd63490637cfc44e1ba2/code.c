#include <stdio.h>

int main() {
    int num, i;

    scanf("%d", &num);

    // Check if the number is prime
    if (num <= 1) {
        printf("Not Prime\n");
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                printf("Not Prime\n");
                return 0;
            }
        }
        printf("Prime\n");
    }

    return 0;
}
