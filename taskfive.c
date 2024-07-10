#include <stdio.h>

int main() {
    int n, sum=0;
    printf("enter a positive integer");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; ++i){
        sum += i;
    }
    printf(" sum of natural numbers up to %d: %d\n",n,sum);
    
    return 0;
}