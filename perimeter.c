#include <stdio.h>

int main() {
    float length = 5.0, width = 3.0;
    float area = length * width;
    float perimeter = 2 * (length + width);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f", perimeter);
    return 0;
}
