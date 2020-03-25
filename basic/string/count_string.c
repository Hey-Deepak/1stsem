//Title: To read and display a string untill * is pressed and 
//count line, words and characters

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------


#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, val, j = 0;
    int count = 0;

    scanf("%[^*]", str);//used the property of scanset to read the string untill * is pressed

    val = strlen(str);

    for (i = 0; str[i]!='\0' ; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' '||str[i+1]=='\n')
        {
            j++;
        }

        if (str[i] == '\n' || str[i] == 79)
        {
            count++;
        }
    }

    printf("the words are=%d\n", j+1);
    printf("the lines are=%d\n", count);

    puts(str);

    return 0;
}
//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------

// by me :) (nisha)