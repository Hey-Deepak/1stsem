//TITLE: To copy one string into another using arrays and pointers

//note:PSC2= Pointer String Copy (2 for two pointers and arrays used)

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include <stdio.h>
#include <conio.h>

int main()
{
    char str[100], str2[100];
    char *ptr, *ptr2;
    int i;

    printf("\n write the string:");
    gets(str);


    ptr = str;
    ptr2 = str2;

    while (*ptr != '\0')
    {
        *ptr2 = *ptr;

        ptr++;
        ptr2++;
    }

    *ptr2 = '\0';

    printf("the copied text is:");
    ptr2 = str2;
    while (*ptr2 != '\0')
    {
        printf("%c", *ptr2);
        ptr2++;
    }

    printf("\nthe string is:");
    puts(str);
    puts(str2);


    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
