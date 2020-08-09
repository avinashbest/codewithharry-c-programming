#include <stdio.h>

int main()
{
    int input_year;
    printf("\nEnter the year you want to check whether it is leap year or not: ");
    scanf("%d", &input_year);

    if (input_year % 4 == 0)
    {
        printf("The year is a leap year.\n\n", input_year);
    }
    else if (input_year % 100 == 0)
    {
        printf("The year is a leap year.\n\n", input_year);
    }
    else if (input_year % 400 == 0)
    {
        printf("The year is a leap year.\n\n", input_year);
    }
    else
    {
        printf("The year is not a leap year.\n\n");
    }

    return 0;
}