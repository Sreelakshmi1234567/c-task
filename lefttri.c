#include <stdio.h>

int main() {
    int i, j, n = 6;
    
    
    for (i = 0; i < n; i++) {
       
        for (j = 0; j < i; j++) {
            printf("*");
        }
        
        for (j = i; j < n; j++) {
            printf("");
        }
       
        printf("\n");
    }
    
    return 0;
}
