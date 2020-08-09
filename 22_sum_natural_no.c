#include <stdio.h>
//C Program to print the sum of first n natural numbers.
int main()
{
    int number, sum = 0;
    printf("\nEnter the number to print the sum upto n natural number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        sum += i; //sum = sum + i
    }
    
    printf("The sum upto %d is %d\n\n", number, sum);

    return 0;
}