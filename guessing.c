#include <stdio.h>
#include <stdlib.h>

int main()
{

printf("\nInteger GUESSING Game \a\n\n");
printf("Let's play guess the integer - only use numbers from 1 to 100.\n");
printf("Enter your guess as an integer, followed by -ENTER- please:\n");

    //int value = 42;
    int guess = 0;
    srand(1951);
    int value = rand() % 100;


    while(guess!=value)
    {
        scanf("%d", &guess);
        
        if (guess==value) break;
        
        else if(guess > value)
            printf("This value is too big!\n");
        
        else if(guess < value)
            printf("This value is too small!\n");
    }

    printf("Looks like you now know the answer! %d \n", guess);    
    
    return 0;
}