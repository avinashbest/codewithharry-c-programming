#include <stdio.h>

//Factorial of a number = n * (n-1) * (n-2) * (n-3) ... so on.
long int recursive_factorial(int n)
{
    if (n == 0 || n == 1)
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
    printf("Enter the number to get the factorial: ");
    scanf("%d", &number);
    printf("Factorial of %d is %d", number, recursive_factorial(number));
    return 0;
}