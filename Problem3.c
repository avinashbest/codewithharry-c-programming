/*
Write a program to print the value of a variable i by using pointer to pointer type o variable
*/
#include <stdio.h>

int main(void)
{
    int i = 234;

    int *ptr_to_int;
    int **ptr_to_ptr;

    ptr_to_int = &i;
    ptr_to_ptr = &ptr_to_int;

    printf("\nThe value of i is %d.\n\n", **ptr_to_ptr);
    
    return 0;
}