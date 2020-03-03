//Title: To extract string from left side 
/* description: we can extraxt string from the left side of the given string 
till any position.

                 eg: hello world
                     pos:3
                     hel
            
*/

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------


#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[50];
    char substr[100];
    int i = 0, n, j;

    printf("enter the string:\n");
    gets(str);

    printf("enter the number to which you to extract the substring:\n");
    scanf("%d", &n);

    j = strlen(str) - n;

    while (str[i] != '\0')
    {
        substr[i] = str[j];
        j++;
        i++;
    }
    substr[i] = '\0';

    printf("the srting after extracting is:\n");
    puts(substr);

    return 0;
}

//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------

// by me :) (nisha)