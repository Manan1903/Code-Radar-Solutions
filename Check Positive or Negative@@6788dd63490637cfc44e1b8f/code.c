#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("Positive\n", num);
    } else if (num < 0) {
        printf("Negative\n", num);
    } else {
        printf("Zero\n");
    }

    return 0;
}
