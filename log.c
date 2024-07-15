#include <stdio.h>

int main() {
    int n=5;
   

    for (int i = 0; i < n; i++) 
    {
      for (int a = 0; a < n; a++)
       {
      if (i == 0 || i == n - 1 || a == n - 1 - i)
       {
              printf("*");
            }
     else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
