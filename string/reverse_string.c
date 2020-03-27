//Title: To reverse the string
/* description: here we are going to reverse the string 
                 eg. hello
                  after reversing=olleh
*/

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char arr1[10];
    char temp;
    int i = 0, j = 0;

    printf("enter the string:\n");
    gets(arr1);

    j = strlen(arr1) - 1;

    while (i < j)
    {
        temp = arr1[j];
        arr1[j] = arr1[i];
        arr1[i] = temp;
        i++;
        j--;
    }
    printf("the reversed string is:%s\n", arr1);

    return 0;
}


//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------

// by me :) (nisha)