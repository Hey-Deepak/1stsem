//TITLE: To find the largest of n numbers using array and pointers

//note:PAB= Pointer Array biggest

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
  int arr[10];
  int *ptr = arr;
  int i, n,large; 
  float mean;
 
  printf("\n total elements:");
  scanf("%d", &n);

  printf("enter the values of elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", ptr + i);
  }

large=*ptr;

  for (i = 0; i < n; i++)
  {
    if (*(ptr+i)<*(ptr+i+1))
    {
        large=*(ptr+i+1);
       // count++;
    }
    
  }

  printf("the largest number is is:%d\n",large);


  return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
