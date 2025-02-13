#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

  
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculating the average
    average = (num1 + num2 + num3) / 3.0; // Use 3.0 to ensure float division

    // Printing the average
    printf("Average: %.2f\n", average);  

    return 0;
}
