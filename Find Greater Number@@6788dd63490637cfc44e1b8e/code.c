#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d\n", num2, num1);
    } else {
        printf("%d\n", num1, num2);
    }

    return 0;
}
