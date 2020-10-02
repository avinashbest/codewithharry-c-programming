#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number to print the multiplication table: ");
    scanf("%d", &number);
    
    //Normal Order
    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    //Reverse Order
    printf("\n\n");
    printf("Printing in Reverse Order:\n");
    for (int i = 10; i > 0; i--)
    {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}