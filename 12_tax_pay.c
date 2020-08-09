#include <stdio.h>

int main()
{
    double income, tax = 0;
    printf("\nEnter your income: ");
    scanf("%lf", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000); //5%
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000); //20%
    }
    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000); //30%
    }
    printf("Your net tax should be paid %lf", tax);

    return 0;
}