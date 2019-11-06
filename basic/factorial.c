//Title: to find the factorial of a given number
/* description: we have to find the factorial of a given number
                which is done multiplying the given number with
                the numer receding by one

            eg: number = 5
                factorial of 5 is = 5*4*3*2*1=120
*/

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
#include <stdio.h>

int main()
{
    int num, fact = 1, i;

    printf("enter the number you want to factorise:");
    scanf("%d", &num);

    if (num == 0)
    {
        fact = 1;
    }

    else
    {
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("factorial of %d is %d", num, fact);
    }
    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//by me:) (nisha)