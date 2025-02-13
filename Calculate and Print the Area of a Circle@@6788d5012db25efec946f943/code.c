#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.14;  // Defining pi as 3.14

    // Taking input
  
    scanf("%f", &radius);

    // Calculating area (π * r^2)
    area = pi * radius * radius;

    // Printing the area
    printf("Area: %.2f\n", area);

    return 0;
}
