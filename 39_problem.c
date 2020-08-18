/*
Write a program having a varible i. Print the address of i. Pass this variable to a function and print its address. Are these adddresses same? why?
*/
#include <stdio.h>
void print_address(int a)
{
    printf("The address of variable i is %u\n", &a);
}
int main(void)
{
    int i = 34;
    printf("\nThe value of variable i is %d\n", i); //34
    print_address(i);
    printf("\nThe address of variable i is %u\n\n", &i);
    //The address of i is not same as in main function and the print_address function, this is because a copy of i is passed. i.e, call by value.
    return 0;
}