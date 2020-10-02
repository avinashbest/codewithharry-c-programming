#include <stdio.h>

int main(void)
{
    int i = 8;
    int *j = &i; //pointer to integer.
    printf("\nThe value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);
    printf("The address of j is %u\n", &j);
    printf("The value of j is %d\n\n", *(&j));//j is storing the address of varible i

    /*
    pointer to pointer:
    int **k;
    k = &j; //where j is pointer to integer
    */
    return 0;
}