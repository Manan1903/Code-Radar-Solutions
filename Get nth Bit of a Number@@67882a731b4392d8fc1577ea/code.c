#include <stdio.h>

int main() {
    int num, n, bitValue;

    scanf("%d", &num);

    scanf("%d", &n);

    bitValue = (num >> n) & 1;

    // Print the value of the nth bit
    printf("%d\n", bitValue);

    return 0;
}
