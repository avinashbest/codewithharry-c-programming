#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    printf("\nEnter the physics marks: ");
    scanf("%d", &physics);

    printf("Enter the chemistry marks: ");
    scanf("%d", &chemistry);

    printf("Enter the maths marks: ");
    scanf("%d", &maths);

    float average = physics + chemistry + maths / 3;
    
    if ((average < 40) || (physics < 33) || (chemistry < 33) || (maths < 33))
    {
        printf("Your total percentage is %.3f and you are fail\n\n", average);
    }
    else
    {
        printf("Your total percentage is %.3f and you are pass.\n\n", average);
    }

    return 0;
}