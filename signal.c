#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

/* source: based in part on http://stackoverflow.com/questions/15353018/putting-a-time-limit-on-user-input?noredirect=1&lq=1 */
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
alarm(10); // AlrmSigHnd will called after n seconds based on alarm(n).

//int i;
//int u=42;
printf("\nLIFE, the UNIVERSE, and Everything!\a\n\n");
printf("You now have 10 seconds to enter the correct answer.\n");
//   printf("Enter your answer as an integer, please:\n");
//   scanf("%d",&i);
//   printf("You entered: %d\n", i);

    int value = 42;
    int guess = 0;

    //while(1)
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