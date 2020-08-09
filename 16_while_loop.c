#include <stdio.h>

int main()
{
    int i = 0;
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("%d\n", i);
        }
        i++; //i=i+1-->1st print then increment
    }

    return 0;
}