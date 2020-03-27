#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int val;

    scanf("%[^*]", str);

    val = strlen(str);

    puts(str);

    printf("the number of characters are %d", val);
    return 0;
}