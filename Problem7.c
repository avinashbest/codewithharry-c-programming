/*Write a program contaning which counts the number of positive integers in an array*/
#include <stdio.h>

int main(void)
{
    int count = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    };
    printf("Total number of positive integers: %d", count);
    return 0;
}