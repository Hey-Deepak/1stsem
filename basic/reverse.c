//Title: to reverse the number
/* description: its just simple to reverse the given number taken as input
                  eg: input= 6745
                      output(reversed number)=5476
                  
*/

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
#include <stdio.h>

int main()
{
    int num, temp, r, a = 0;

    printf("enter the number that you want to reverse:");
    scanf("%d", &num);

    temp = num;

    while (num != 0)
    {
        r = num % 10;
        a = (a * 10) + r;
        num = num / 10;
    }
}

printf("the reversed number of %d is %d", temp, a);
return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//by me:) (nisha)