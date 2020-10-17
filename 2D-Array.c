#include<stdio.h>

int main(void)
{
	
    int rows;
    int columns;
    int marks[rows][columns];
    int i=0;
	int j=0;
	int k=0;
	int l=0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

   

    for(i=0;i < rows;i++)
    {
        for(j=0; j < columns; j++)
        {
            printf("\nEnter the marks of the student %d in subject %d:", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for(k=0; k<rows;k++)
    {
        for(l=0; l < columns; l++)
        {
            printf("\nthe marks of the student %d in subject %d is: %d", k + 1, l + 1, marks[k][l]);
        }
    }

    return 0;
}
