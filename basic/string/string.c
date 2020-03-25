#include <stdio.h>
#include <conio.h>

int main()
{
    char str[10]="HELLO";
    for (int i = 0; i <10; i++)
    {
          printf("%d\n",str[i]);
    } 

    printf(str);  /*it itself use the %s format specifier. if the str is used in any other format like str[5],
                    it will generate error */


    return 0;
}

/* if we do not give the space for null character then it make the programm is considered ill-formed
    and any unaccepted error can happen */
