#include <stdio.h>

int main() {
    float costPrice, sellingPrice;

    scanf("%f", &costPrice);
   
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        printf("Profit\n", sellingPrice - costPrice);
    } else if (sellingPrice < costPrice) {
        printf("Loss\n", costPrice - sellingPrice);
    } else {
        printf("No Profit No Loss.\n");
    }

    return 0;
}
