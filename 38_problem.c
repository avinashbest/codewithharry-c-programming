/*Write a program to print the addreess of a variable. Use this affress to get the value of this variable.*/
#include <stdio.h>

int main(void)
{
    int a = 42;
    int *ptr_to_int = &a;
    printf("\nThe value of variable a is %d\n", a);            //42
    printf("The address of variable a is %d\n", ptr_to_int); //address
    printf("The value of variable a is %d\n\n", *ptr_to_int);  //42
    return 0;
}