#include <stdio.h>
/*
void print_array(int *ptr_to_arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d.\n", i + 1, *(ptr_to_arr + i));
    }
}
*/
void print_array(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d.\n", i + 1, array[i]);
    }
};

int main(void)
{
    int arr[] = {51, 56, 165, 163, 321, 516, 849};
    print_array(arr, 7);
    return 0;
};