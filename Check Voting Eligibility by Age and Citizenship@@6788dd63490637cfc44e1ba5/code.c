#include <stdio.h>

int main() {
    int age, citizen;
    scanf("%d %d", &age, &citizen);

    // Check if the person is eligible to vote
    if (age >= 18 && citizen == 1) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}
