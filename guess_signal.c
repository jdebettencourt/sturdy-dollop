#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>


void AlrmSigHnd()
{
printf("\n\n\a KABLOOM! \n\n Bye, Bye Now! \n\n You took way too long! \n\n Now we're all dust in the cosmic wind again! \n\n");
void sleep(int zzzzz);
sleep(2);
printf(" Seriously? Are you that slow? \n\n\a");
exit(0);
}


int main()
{

void(*SigHnd);
SigHnd = AlrmSigHnd;

signal(SIGALRM,SigHnd);
int alarm(int j);
alarm(15); // AlrmSigHnd will called after n seconds based on alarm(n).


printf("\nLIFE, the UNIVERSE, and Everything!\a\n\n");
printf("You now have 15 seconds to enter the correct answer.\n");


    int guess = 0;
    srand(time(NULL));
    int value = rand() % 100 + 1;
    

    while(guess!=value)
    {
        scanf("%d", &guess);
        
        if (guess==value) break;
        
        else if(guess > value)
            printf("This value is too big!\n");
        
        else if(guess < value)
            printf("This value is too small!\n");
    }

    printf("Looks like you know the answer! %d  But what is the question?\n", guess);
    
    alarm(0); // Cancel signal registration
    
    return 0;
}