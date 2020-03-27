//Title:to find the biggest number of three numbers using pointers and function

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include <stdio.h>

int big_number(int *a, int *b, int *c);

int main()
{
    int a, b, c, val;

    printf("enter the three numbers:");
    scanf("%d %d %d", &a, &b, &c);

    val = big_number(&a, &b, &c);

    printf("the biggest number is:%d", val);
    return 0;
}

int big_number(int *a, int *b, int *c)
{
    if (*a > *b && *a > *c)
    {
        return *a;
    }
    else if (*b > *a && *b > *c)
    {
        return *b;
    }
    else
    {
        return *c;
    }
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
