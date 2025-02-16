#include <stdio.h>

int main() {
    int num, n;

    scanf("%d", &num);
   
    scanf("%d", &n);

    int mask = ~(1 << n);

    num = num & mask;

    printf("%d\n",num);

    return 0;
}
