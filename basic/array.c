//Title: To interchange the largest and the smallest number.
/* description: we are going to change the smallest number to biggest number using arrays and functions
                   eg: input 5
                          33  22  44  58  90
                    output 
                         33  90  44  58  22
*/

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include <stdio.h>
#include <conio.h>

int read_array(int arr[], int n);
int write_array(int arr[], int n);
int large_array(int arr[], int n);
int small_array(int arr[], int n);
int interchange_array(int arr[], int n);

int main()
{
    int arr[10];
    int n;

    printf("enter the total number of elements");
    scanf("%d", &n);

    read_array(arr, n);

    printf("the elements are:");
    write_array(arr, n);

    interchange_array(arr, n);
    printf("after interchanging the elements are:");
    write_array(arr, n);

    return 0;
}

int read_array(int arr[], int n)
{
    int i;
    printf("enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return 0;
}

int small_array(int arr[], int n)
{
    int i, small = 0, small_pos;

    small = arr[0];
    for (i = 0; i < n; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
            small_pos = i;
        }
    }
    return small_pos;
}

int large_array(int arr[], int n)
{
    int i, large = 0, large_pos;

    large = arr[0];
    for (i = 0; i < n; i++)
    {
        if (large < arr[i])
        {
            large = arr[i];
            large_pos = i;
        }
    }
    return large_pos;
}

int interchange_array(int arr[], int n)
{
    int temp;
    int large_pos = large_array(arr, n);
    int small_pos = small_array(arr, n);

    temp = arr[large_pos];
    arr[large_pos] = arr[small_pos];
    arr[small_pos] = temp;

    return 0;
}

int write_array(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }

    return 0;
}

//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------

// by me :) (nisha)