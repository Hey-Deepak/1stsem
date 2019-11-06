//Title: to check weather the number is armstrong or not
/* description: armostrong number is a number which remains same 
                after adding the number raise to the power of their 
                place
                   eg: a = 153
                       b=1^3 + 5^3 +3^3 = 153
*/

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, r, a = 0, count = 0,b;

    printf("enter the number that you wanted to check:");
    scanf("%d", &num);

    temp = num;
    b=num;

    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }

    while (num != 0)
    {

        r = num % 10;
        a = a + pow(r, count);
        num = num / 10;
    }

    

 if (b == a)
    {
        printf("%d: this number is armstrong", a);
    }
    else
    {
        printf("%d: this number is not armstrong", a);
    }
    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
 //by me:) (nisha)