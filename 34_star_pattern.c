/*

*
***
*****

*/
#include <stdio.h>

void print_pattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    else
    {
        print_pattern(n - 1);
        for (int i = 0; i < (2 * n - 1); i++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n = 3;
    print_pattern(n);
    return 0;
}