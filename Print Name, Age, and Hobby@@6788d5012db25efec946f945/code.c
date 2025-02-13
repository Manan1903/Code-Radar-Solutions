#include <stdio.h>

int main() {
    char name[50], hobby[50];
    int age;
;
    scanf("%s", name);  // Reads a single word (stops at space)

    scanf("%d", &age);  // Reads an integer
;
    scanf("%s", hobby);  // Reads a single word (stops at space)

 

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Favorite Hobby: %s\n", hobby);

    return 0;
}
