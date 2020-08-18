#include <stdio.h>

void swap(int *x, int *y);
void wrong_swap(int x, int y);

int main(void)
{
    int a = 3, b = 5;
    printf("\nThe value of a and b before swapping is %d and %d.\n", a, b);
    wrong_swap(a, b); //will not work bcoz of call by value.
    printf("The value of a and b after swapping is %d and %d.\n\n", a, b);

    printf("\nThe value of a and b before swapping is %d and %d.\n", a, b);
    swap(&a, &b); //will work due to call by reference
    printf("The value of a and b after swapping is %d and %d.\n\n", a, b);
    return 0;
}

void wrong_swap(int x, int y) //call by value
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap(int *x, int *y) //call by reference
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}