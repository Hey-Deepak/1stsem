//Title: To copy a string into other from a nth position
/* description: we can copy a string from any position till the string ends

                 eg: hello 
                     pos:1
                     ello
            
*/

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello";
    char str1[20];
    int i, j = 0;

    for (i = 1; str[i] != '\0'; i++)
    {
        str1[j] = str[i];
        j++;
    }

    str1[j] = '\0';

    puts(str1);

    return 0;
}

//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------

// by me :) (nisha)