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
    int num, i , a=0 , b=1 , sum;

    printf("enter the term of series you want to print:");
    scanf("%d", &num);

    printf("%d\n",a);
    printf("%d\n",b);

    for ( i = 3; i <= num; i++)
    {
       
        sum=a+b;
        printf("%d\n",sum);
        a=b;
        b=sum;
        
    }
     
    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
 //by me:) (nisha)