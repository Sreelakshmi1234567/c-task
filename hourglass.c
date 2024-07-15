#include <stdio.h>

int main() {
    int k,j ,n = 6;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <  i  ; j++) {
            printf(" ");
        }
        for (int k = 1; k < 2*(n-i)-0; k++) {
            printf("*");
        }
        printf("\n");
    }
   
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i - 0; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

  