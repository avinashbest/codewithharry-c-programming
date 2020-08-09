#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter four numbers to check which one is greater among them: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    //Algorithm for checking the greatest number among input values.
    if ((a > b) && (a > c) && (a > d))
    {
        printf("%d is greatest among them.", a);
    }
    else if ((b > c) && (b > d))
    {
        printf("%d is greatest among them.", b);
    }
    else if (c > d)
    {
        printf("%d is greatest among them.", c);
    }
    else
    {
        printf("%d is greatest among them.", d);
    }

    return 0;
}