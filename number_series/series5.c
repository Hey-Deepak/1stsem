// Title: to print number pattern
/* Description: to print the numbers of pattern 
                   4 3 2 1
                     3 2 1
                       2 1
                         1   */

//-----------------------------------------------------------------------------
// ------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    int i, n, j, k, a, m;
    printf("enter the length:\n");
    scanf("%d", &n);
    a = n;
    for (i = 1; i <= n; i++)
    {
      if (a!=0)
      {
          printf("%d",a);
          a--;
      }
    }

      
         
    
    return 0;
}

//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------

// by me :) (nisha)