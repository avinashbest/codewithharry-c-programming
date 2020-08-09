#include <stdio.h>

int main()
{
    int number;
    long unsigned int factorial = 1;
    printf("Enter the number to get the factorial: ");
    scanf("%d", &number);
    //Calculation using for loop.
    for (int i = 1; i <= number; i++)
    {
        factorial *= i; //factorial = fatorial * i
    }
    /*
    int i = 1;
    while (i <= number)
    {
        factorial *= i; //factorial = fatorial * i
        i++;
    }

    */
    printf("The value of factorial %d is %d", number, factorial);
    return 0;
}