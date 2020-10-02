/*C program to check whether the given number is even or odd.*/
#include <stdio.h>

int main()
{
    int a;
    printf("\nEnter the number to check whether it is even or odd?\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The given number is even.\n\n");
    }
    else
    {
        printf("The given number is odd.\n\n");
    }
    return 0;
}
/*

#. Assignment operator --> =
#. To check Equality --> ==
#. In C Program any non-zero number is treated as true(1).

*/