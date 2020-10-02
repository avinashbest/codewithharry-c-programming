#include <stdio.h>
#include <math.h>

int main()
{
    double side;
    printf("Enter the side of the square: ");
    scanf("%lf", &side);
    printf("Area of the square is %lf", pow(side, 2));
    return 0;
}