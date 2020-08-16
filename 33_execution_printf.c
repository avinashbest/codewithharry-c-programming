#include <stdio.h>

int main()
{
    int a = 5;
    printf("%d %d %d", a, ++a, a++); //Execution of order in C is from right to left. And it a/c to GCC, Comppiler depended
    return 0;
}