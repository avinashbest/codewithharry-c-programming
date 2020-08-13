#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//A simple C Program game to guess the number.
int main()
{
    int number, guess, n_guess_attemps = 1;
    srand(time(0));
    number = rand() % 10 + 1; //Genrate a random number b/w 1 to 10
    // printf("\nThe number is %d.\n", number);
    do
    {
        printf("\nGuess the number b/w 1 to 10: ");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", n_guess_attemps);
        }
        n_guess_attemps++;

    } while (guess != number);

    return 0;
}