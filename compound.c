#include <stdio.h>


int main() {
    float principal = 1000, rate = 5, time = 2;
    int n = 4; 
    float compoundInterest = principal * ((1 + rate / (100 * n)), n * time);
    printf("Compound Interest: %.2f", compoundInterest - principal);
    return 0;
}
