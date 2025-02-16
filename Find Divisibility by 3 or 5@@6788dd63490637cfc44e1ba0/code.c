#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    // Check divisibility by 3, 5, both, or neither
    if (num % 3 == 0 && num % 5 == 0) {
        printf("Divisible by Both\n");
    } else if (num % 3 == 0) {
        printf("Divisible by 3\n");
    } else if (num % 5 == 0) {
        printf("Divisible by 5\n");
    } else {
        printf("Not Divisible\n");
    }

    return 0;
}
