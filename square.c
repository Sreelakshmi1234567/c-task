#include <stdio.h>

int main() {
    int n=5;
   

    for (int i = 0; i < n; i++) 
    {
      for (int a = 0; a < n; a++)
       {
      if (i == 0 || i == 1 )
       {
              printf("*");
            }
      else if (i == 0 || i == 2 )
       {
              printf("*");
            }  
      else if (i == 0 || i == 3)
       {
              printf("*");
            }
      else if (i == 0 || i == 4)
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
