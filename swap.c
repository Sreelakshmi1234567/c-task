#include <stdio.h>

int main() {
    int num1 = 5, num2 = 10;
    int swap = num1;
    num1 = num2;
    num2 = swap;
    printf("After swapping: num1 = %d, num2 = %d", num1, num2);
    return 0;
}
