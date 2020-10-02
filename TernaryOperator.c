#include <stdio.h>

int main()
{
    int a;
    printf("\nEnter the number to check whether it is even or odd?\n");
    scanf("%d", &a);
    (a % 2 == 0) ? printf("The given number is even.\n\n") : printf("The given number is odd.\n\n");
    return 0;
}