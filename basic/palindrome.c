//Title: to check weather the number is palindrome or not
/* description: palindrome number is a number which remains same 
                even after reversing the number 
                   eg: 121
                      after reversing: 121 
*/

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
#include <stdio.h>

int main()
{
    int num, temp, r, a = 0;

    printf("enter the number that you wanted to check:");
    scanf("%d", &num);

    temp = num;

    while (num != 0)
    {
        r = num % 10;
        a = (a * 10) + r;
        num = num / 10;
    }

    if (a == temp)
    {
        printf("%d: this number is palindrome", temp);
    }
    else
    {
        printf("%d: this number is not palindrome", temp);
    }
}

