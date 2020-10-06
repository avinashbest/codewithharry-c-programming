#include <stdio.h>
#include<conio.h>   

int main()
{
    char character;
    printf("\nEnter a character: ");
    scanf("%c", &character);

    // ASCII Values for lowercase a - z is 97 - 122
    //if(character >= 97 && character <= 122)   // you can use this condition also..
    if (character <= 122 && character >= 97)
    {
        printf("It is lowercase.");
    }
    else
    {
        printf("It is not lowercase.");
    }

    return 0;
}
