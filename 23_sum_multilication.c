#include <stdio.h>

int main()
{
    int number, sum = 0;

    printf("\nEnter the number to print the sum upto n natural number: ");
    scanf("%d", &number);

    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", number, i, number * i);
        sum += number * i;
    }

    printf("The sum is %d is %d\n\n", number, sum);
    
    return 0;
}