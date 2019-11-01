#include <stdio.h>

char function_that_prints()
  {  
      printf( "I printed");
  }   

char function_that_returns()
   {
        return "a" ;
   }    

int main()
{
    char f1,f2;
f1 = function_that_prints();
f2 = function_that_returns();

printf( "Now let us see what the values of %c and %c are",f1,f2);


return 0;
}