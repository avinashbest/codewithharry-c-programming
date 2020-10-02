#include <stdio.h>

int main()
{
    float radius = 0.0, height = 0.0;
    float PI = 3.14;
    printf("\nEnter the radius of circle: ");
    scanf("%f", &radius);
    printf("The area of the circle is %.3f sq. units\n", PI * radius * radius);

    /*Now calculating the volume of the cylinder attached to some height of the above circle data.*/

    printf("\nEnter the height of cylinder connected to the circle: ");
    scanf("%f", &height);
    printf("The volume of the cylinder is %.3f cubic units\n\n", PI * radius * radius * height);

    return 0;
}