#include <time.h>
#include <stdio.h>

int main()
{
    time_t end  = time(NULL) + 7; //7s

    while (1) {

        //your code...
        printf("running...\n");

        if (time(NULL) >= end) {
            break;
        }

        //your code..
    }
    return 0;
}