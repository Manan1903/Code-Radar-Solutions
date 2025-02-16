#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    // Check if the Least Significant Bit (LSB) is set
    if (num & 1) {
        printf("Set \n", num);
    } else {
        printf("Not Set \n", num);
    }

    return 0;
}
