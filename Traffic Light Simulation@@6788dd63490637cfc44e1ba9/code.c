#include <stdio.h>

int main() {
    char light;

    scanf("%c", &light);

    // Evaluate the traffic light color and print the corresponding action
    switch(light) {
        case 'R': // Red
            printf("Stop\n");
            break;
        case 'G': // Green
            printf("Go\n");
            break;
        case 'Y': // Yellow
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
