//Title: To insert a string 
/* description: here we can insert any string at whatever position we like 
            
*/

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[50];
    char str1[100];
    char new_str[200];
    int i = 0, j=0,k=0,n;

    printf("enter the string:\n");
    gets(str);

    printf("enter the string:\n");
    gets(str1);
    
    printf("enter the position:\n");
    scanf("%d",&n);

    while (str[i]!='\0')
    {
        if (i==n)
        {
            while (str1[k]!='\0')
            {
                new_str[j]=str1[k];
                j++;
                k++;
            }
            
        }
        else
        {
            new_str[j]=str[i];
            j++;
            
        }
        i++;
        
    }
    new_str[j]='\0';

    printf("the new string is:\n");
    puts(new_str);

    return 0;
}

//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------

// by me :) (nisha)