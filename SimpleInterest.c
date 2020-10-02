#include <stdio.h>

int main()
{
    float principal, rate, years;
    printf("\nEnter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time duration in years: ");
    scanf("%f", &years);

    float simpleInterest = ((principal * rate * years) / 100); //Calculation

    printf("The simple interest of the given data is %.3f \n\n", simpleInterest);
    
    return 0;
}