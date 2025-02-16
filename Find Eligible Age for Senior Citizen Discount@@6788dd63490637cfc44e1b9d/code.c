#include <stdio.h>

int main() {
    int age;

    scanf("%d", &age);

    // Check if the person is eligible for senior citizen discount
    if (age >= 60) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}
