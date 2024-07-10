#include <stdio.h>

int main() {
    int num = 29;
    if (isPrime(num)) {
        printf("%d is a prime number.", num);
    } else {
        printf("%d is not a prime number.", num);
    }
    return 0;
}