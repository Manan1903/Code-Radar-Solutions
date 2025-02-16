#include <stdio.h>

int main() {
    float CP, SP;

    scanf("%f", &CP);
   
    scanf("%f", &SP);

    if (SP > CP) {
        printf("Profit\n", SP - CP);
    } else if (SP < CP) {
        printf("Loss\n", CP - SP);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
