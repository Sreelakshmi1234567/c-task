#include <stdio.h>

int main() {
    int i,j, n = 5;
    for (int i = 0; i < n; i++) {
       
        for (int j = 0; j < n - i - 0; j++) {
            
            printf(" ");
        }
        for (int k = 0; k < 2*i-1; k++) {
             if(i==4|| i<n-5||j=0){
            printf("*");}
        }
        else{
            printf("");

        }
        printf("\n");
    }
   
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <  i  ; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2*(n-i)-1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

