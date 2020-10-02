#include <stdio.h>

int main(void)
{
    printf("\n\n");

    int marks[] = {50, 60, 70, 80, 90};
    printf("The value of marks[0] is %d\n", marks[0]);
    printf("The value of marks[1] is %d\n", marks[1]);
    printf("The value of marks[2] is %d\n", marks[2]);
    printf("The value of marks[3] is %d\n", marks[3]);
    printf("The value of marks[4] is %d\n", marks[4]);

    printf("\n\n");

    float floating_point_marks[] = {50, 60, 70, 80, 90};
    printf("The value of marks[0] is %.3f\n", floating_point_marks[0]);
    printf("The value of marks[1] is %.3f\n", floating_point_marks[1]);
    printf("The value of marks[2] is %.3f\n", floating_point_marks[2]);
    printf("The value of marks[3] is %.3f\n", floating_point_marks[3]);
    printf("The value of marks[4] is %.3f\n", floating_point_marks[4]);

    printf("\n\n");
    return 0;
}