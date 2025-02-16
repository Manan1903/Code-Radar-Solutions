#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

 
    if (num % 2 == 0) {
        printf("even.\n", num);
    } else {
        printf("odd.\n", num);
    }

    return 0;
}
