#include <stdio.h>

float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}
int main()
{
    int a, b, c;
    printf("\nEnter the value of number 1: ");
    scanf("%d", &a);
    printf("\nEnter the value of number 2: ");
    scanf("%d", &b);
    printf("\nEnter the value of number 3: ");
    scanf("%d", &c);
    printf("\nAverage = %.3f\n\n", average(a, b, c));
    return 0;
}