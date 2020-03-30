//TITLE: To find the mean of na numbers using array and pointers

//note:PAM= Pointer Array Mean

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
  int arr[10];
  int *ptr = arr;
  int i, n,add=0; 
  float mean;
 
  printf("\n total elements:");
  scanf("%d", &n);

  printf("enter the values of elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", ptr + i);
  }

  for (i = 0; i < n; i++)
  {
    add=add+*(ptr+i);
  }

  printf("the addition is:%d\n",add);
  mean=add/n;

  printf("the mean is:%f",mean);

  return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
