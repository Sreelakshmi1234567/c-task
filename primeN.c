#include <stdio.h>


int main() {
    int n;
    if (n <= 1);
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0);
    }
    printf("%d",n);

    int n = 50;
    printf("Prime numbers from 1 to %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
