/*
Write a program using function which calculate the sum and average of two numbers. Use pointer and print the values of sum and average in main().*/

#include <stdio.h>

void sum_and_avg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}
int main(void)
{
    int a = 456, sum = 0, b = 235;
    float avg = 0;
    sum_and_avg(a, b, &sum, &avg);
    printf("\nSum = %d\nAverage = %.3f\n\n", sum, avg);
    return 0;
}