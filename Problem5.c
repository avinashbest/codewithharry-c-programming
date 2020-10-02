#include <stdio.h>

int main(void)
{
    int number;
    printf("\nEnter the number: ");
    scanf("%d", &number);

    int multiplication[10];
    
    for (int i = 0; i < 10; i++)
    {
        multiplication[i] = number * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n", number, i + 1, multiplication[i]);
    }
    printf("\n\n");
    return 0;
}