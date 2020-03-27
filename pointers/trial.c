//title:just to convert float into integer 

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    float n1;
    float *num1 = &n1;

    printf("the  number is is");
    scanf("%f", num1);

    *num1=(int)n1;

    printf("the number is %f", *num1);

    return 0;
}