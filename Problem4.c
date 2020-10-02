/*
Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the 3rd element where ptr is a pointer pointing to the first elemtnt of the array.
*/
#include <stdio.h>

int main(void)
{
    int arr[10];
    int *ptr_to_arr = arr;
    ptr_to_arr += 2; //ptr + 2
    if (ptr_to_arr == &arr[2])
    {
        printf("True, Hence Verified.");
    }
    else
    {
        printf("False");
    }

    return 0;
}