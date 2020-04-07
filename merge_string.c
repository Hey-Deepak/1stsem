#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char str[100],str2[100],merge_str[200];
    int i=0,j=0;
    
    printf("enter the first string:\n");
    gets(str);
    printf("enter the second strin:\n");
    gets(str2);

    while(str[i]!='\0')
    {
       merge_str[j]=str[i];
       i++;
       j++;
    }
    i=0;
    while (str2[i]!='\0')
    {
        merge_str[j]=str2[i];
        i++;
        j++;
    }
    
    merge_str[j]='\0';
    
    printf("after merging the string is:\n");
    puts(merge_str);

    return 0;
}    