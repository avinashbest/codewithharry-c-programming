#include <stdio.h>

int sum(int a, int b); //Function prototype

int main()
{
    int a, b, c;
    printf("\nEnter the number you want to sum: ");
    scanf("%d%d", &a, &b);
    c = sum(a, b); //Function Call //Here a and b are arguments(Actual Value)
    printf("The sum of the given number is %d\n\n", c);
    return 0;
}

int sum(int a, int b) //Function Defination //Here a and b are parameters(Placeholders)
{
    int result;
    result = a + b;
    return result;
}