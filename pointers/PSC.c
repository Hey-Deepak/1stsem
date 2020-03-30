//TITLE: To read and display the string and also to count the total characters words and lines using array and pointers

//note:PSC= Pointer String count

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int i, count = 0, words = 1, lines = 1;

    printf("\n write the string:");
    gets(str);

    ptr = str;

    while (*ptr != '\0')
    {
        if (*ptr ==' ' && *(ptr+1) !=' '|| *ptr == '\n')
        {
            words++;
        }
        else if (*ptr == '\n' || *ptr == 76)
        {
            lines++;
        }

        ptr++;
        count++;
    }

    printf("\nthe string is:");
    puts(str);

    printf("total words are:%d\n", words);
    printf("total lines are:%d", lines);
    printf("total characters are:%d", count);

    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
