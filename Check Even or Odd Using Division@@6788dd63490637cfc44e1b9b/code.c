#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    // Check if the number is divisible by 2
    if (num / 2*2 == num) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}
