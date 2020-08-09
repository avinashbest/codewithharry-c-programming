#include <stdio.h>

int main()
{
    float a = 0.0, b = 0.0; //Declaring & intializing varible a & b with 0.
    printf("Enter two numbers to get summation: ");
    scanf("%f%f", &a, &b);
    printf("The summation of the given numbers is: %.3f\n\n", a + b);
    return 0;
}
