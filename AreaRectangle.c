#include <stdio.h>

int main()
{
    float length = 0.0, breadth = 0.0; 
    printf("\nEnter the length of rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &breadth);
    printf("The area of the rectangle is %.3f sq. units\n\n", length * breadth);
    return 0;
}
