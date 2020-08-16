#include <stdio.h>

long int recursive_fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return (recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2));
    }
}
int main()
{
    int how_many;
    printf("\nEnter the number to get the fibonacci: ");
    scanf("%d", &how_many);
    printf("0\t");
    for (int i = 1; i <= how_many; i++)
    {
        printf("%d\t", recursive_fibonacci(i));
    }
    printf("\n\n");
    return 0;
}