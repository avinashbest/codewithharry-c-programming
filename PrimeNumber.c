#include <stdio.h>

int main()
{
    int number, prime = 1;
    printf("Enter the number to check whether it is prime or not: ");
    scanf("%d", &number);

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("The given number is not prime.");
    }
    else
    {
        printf("The given number is prime.");
    }

    return 0;
}