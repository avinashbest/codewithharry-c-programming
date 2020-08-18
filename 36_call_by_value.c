#include <stdio.h>

int sum(int a, int b)
{
    int sum;
    sum = a + b;
    /*Changing the value of a and b nothing happens*/
    b = 10000;
    a = 99999;
    return sum;
}
int main(void)
{
    int a = 4, b = 5;
    printf("\nThe value of a and b is %d and %d.\n", a, b);
    printf("The sum is %d.\n", sum(a, b));  //call by value (Passing a copy of a and b in the sum function)
    printf("The value of a and b is %d and %d.\n\n", a, b); // value of a and b remains same after the call by value
    return 0;
}