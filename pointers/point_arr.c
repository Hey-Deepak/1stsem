//TITLE: To read and display arrays of n integers using pointers

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
  int arr[10];
  int *ptr = arr;
  int i, n; 

  printf("\n total elements:");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    scanf("%d", ptr + i);
  }

  for (i = 0; i < n; i++)
  {
    printf("%d\n", *(ptr + i));
  }

  return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
