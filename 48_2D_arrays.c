#include <stdio.h>

int main(void)
{
    int rows;
    int columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int marks[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("\nEnter the marks of the student %d in subject %d:", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        };
    };

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("\nEnter the marks of the student %d in subject %d is: %d", i + 1, j + 1, marks[i][j]);
        };
    };

    return 0;
};