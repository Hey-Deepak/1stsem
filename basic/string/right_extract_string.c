//Title: To extract string from right side 
/* description: we can extraxt string from the right side of the given string 
till any position.

                 eg: hello world
                     pos:3
                     llo
            
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
    int i = 0, n;

    printf("enter the string:\n");
    gets(str);

    printf("enter the number to which you to extract the substring:\n");
    scanf("%d", &n);

    while (str[i] != '\0' && i < n)
    {
        substr[i] = str[i];
        i++;
    }
    substr[i] = '\0';

    printf("the srting after extracting is:\n");
    puts(substr);

    return 0;
}