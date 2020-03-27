//title: to add float number using pointer upto 2 decimal

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    float num1, num2, sum = 0.0;
    float *n1 = &num1, *n2 = &num2, *psum = &sum;

    printf("enter the two values");
    scanf("%f %f", n1, n2);

    *psum = *n1 + *n2; //addition of two pointers is valid 
          
  // '*' the indirection is equivalent to writing value at address        

    printf("the sum of %f + %f=%.2f", *n1, *n1, *psum);

    return 0;
}