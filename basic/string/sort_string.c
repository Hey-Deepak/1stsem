//Title: To sort the string 
// description: we used the same algorithm that we used to sort arrays

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>

int main()
{
    int i,j;
    char temp[100];
    char name[5][10];

    for ( i = 0; i < 5; i++)
    {
        gets(name[i]);
    }

   
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5-i-1; j++)
        {
            if (strcmp(name[j],name[j+1])>0)
            {
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
            
        }
        
    }
   for ( i = 0; i < 5; i++)
   {
       puts(name[i]);
   }
    
    return 0;
}

//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------

// by me :) (nisha)