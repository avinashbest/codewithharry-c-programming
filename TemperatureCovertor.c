#include <stdio.h>

int main()
{
    float celsius = 0.0;
    printf("\nEnter the value of temperatur in degree celsius: ");
    scanf("%f", &celsius);

    float farenheit = (celsius * 9 / 5) + 32; //Calculation

    printf("The value of the temperature in farenheit is %.3f F\n\n", farenheit);

    return 0;
}