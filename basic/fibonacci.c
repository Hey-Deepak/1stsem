//Title: to print the fibonacci series
/* description: this is what fibonacci series looks like:
                   eg:0
                      0   (that is the addition of the two consecutive precedence value )
                      1    
                      1
                      2
                      3
                      5 
*/

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
#include <stdio.h>

int main()
{
    int num, i, a = 0, b = 1, sum;

    printf("enter the term of series you want to print:");
    scanf("%d", &num);

    printf("%d\n", a);
    printf("%d\n", b);

    for (i = 3; i <= num; i++)
    {

        sum = a + b;
        printf("%d\n", sum);
        a = b;
        b = sum;
    }

    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//by me:) (nisha)