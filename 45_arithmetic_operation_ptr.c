#include <stdio.h>

int main(void)
{
    int number_1, number_2;
    int *ptr_to_number_1 = &number_1;
    int *ptr_to_number_2 = &number_2;

    printf("\nEnter two number: ");
    scanf("%d %d", &number_1, &number_2);

    printf("Addition = %d\n", number_1 + *(ptr_to_number_2));
    printf("Subtraction = %d\n", *(ptr_to_number_1)-number_2);
    printf("Multiplication = %d\n", *(ptr_to_number_1) * *(ptr_to_number_2));
    printf("Comparision = %d\n\n", (*(ptr_to_number_1) == *(ptr_to_number_2)));
    return 0;
}