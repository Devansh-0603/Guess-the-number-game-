#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 0 and 99 (inclusive)
    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Print the random number
    // printf("Random number: %d\n", random_number);

    do
    {
        printf("Guess the number");
    scanf("%d", &guessed);
        
        if (guessed > random_number)
        {
            printf("LOWER NUMBER PLEASE :) !");
        }
        else
        {
            printf("HIGHER NUMBER PLEASE ;) !");
        }
        no_of_guesses++;
    } 
    while (guessed != random_number);
    printf("YOU GUESSED THE RIGHT NUMBER IN %d GUESSES", no_of_guesses);
    return 0;
}