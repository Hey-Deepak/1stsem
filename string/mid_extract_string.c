//Title: To extract string from mid side 
/* description: we can extraxt string from the mid  of the given string 
till any position.

                 eg: hello world
                     pos:3,5
                     lo
            
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
    int i = 0, m, n;

    printf("enter the string:\n");
    gets(str);

    printf("enter the number to which you to extract the substring:\n");
    scanf("%d", &m);

    printf("enter the number to which you to extract the substring:\n");
    scanf("%d", &n);

    while (m < n)
    {
        substr[i] = str[m];
        i++;
        m++;
    }
    substr[i] = '\0';

    printf("the srting after extracting is:\n");
    puts(substr);

    return 0;
}