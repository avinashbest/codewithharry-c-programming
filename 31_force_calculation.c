#include <stdio.h>

float force_calulation(float mass)
{
    float force;
    force = mass * 9.8; //Force = mass * acceleration
    return force;
}
int main()
{
    float m;
    printf("\nEnter the mass of the body in Kg(s): ");
    scanf("%f", &m);
    printf("The value of force in Newton is %.3f\n\n", force_calulation(m));

    return 0;
}