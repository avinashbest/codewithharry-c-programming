#include <stdio.h>
//First n natural number printing program using for loop.
int main()
{
    int index_value;
    printf("\nEnter the index value for the natural number. ");
    scanf("%d", &index_value);
    //Syntax:for (intialize; test; increment / decrement)
    for (int i = 1; i <= index_value; i++)
    {
        printf("%d\n", i);
    }
    printf("Now printing the numbers in reverse order:\n");
    for (int i = index_value; i > 0; i--)
    {
        printf("%d\n", i);
    }
    printf("\n\n");
    return 0;
}