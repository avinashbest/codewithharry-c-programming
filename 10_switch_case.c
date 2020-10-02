#include <stdio.h>
#include <conio.h>

int main()
{
    int rating;
    printf("\nEnter the rating b/w (1-5):\n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("Your rating is 1.\n\n");
        break;
    case 2:
        printf("Your rating is 2.\n\n");
        break;
    case 3:
        printf("Your rating is 3.\n\n");
        break;
    case 4:
        printf("Your rating is 4.\n\n");
        break;
    case 5:
        printf("Your rating is 5.\n\n");
        break;
    default:
        printf("Invalid rating.");
        break;
    }
    return 0;
}
