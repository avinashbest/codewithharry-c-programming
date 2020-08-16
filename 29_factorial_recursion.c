#include <stdio.h>

//Factorial of a number = n * (n-1) * (n-2) * (n-3) ... so on.
long int recursive_factorial(int n)
{
    printf("Calling recursive_factorial (%d).\n", n);
    if (n == 0 || n == 1) //Base Condition to stop the recursive call.
    {
        return 1;
    }
    else
    {
        return (n * recursive_factorial(n - 1));
    }
}
int main()
{
    int number;
    printf("\nEnter the number to get the factorial: ");
    scanf("%d", &number);
    printf("\nFactorial of %d is %d\n\n", number, recursive_factorial(number));
    return 0;
}