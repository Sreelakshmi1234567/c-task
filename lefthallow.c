#include <stdio.h>

int main() {
    int n = 7;
    
    for (int i = 1; i <= n; i++) {
        
        if (i == 1 || i == n) {
            
            for (int j = 0; j < i; j++) {
                printf("*");
            }
        } else {
            
            printf("*");
            
            for (int j = 0; j < i - 2; j++) {
          
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

