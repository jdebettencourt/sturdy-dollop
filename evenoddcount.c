/* source http://stackoverflow.com/questions/32898787/c-programming-repeat-scanf-unless-user-enters-0 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    int max=100;
    int integer;
    int even[max];
    int odd[max];
    int index=0;
    int evencount=0;
    int oddcount=0;
    char user_name[128];

    printf("What is your name?\n");
    scanf("%s", user_name);

    printf("\nEnter any real numbers followed by ENTER.\n");
    while (index < max){
        scanf("%d", &integer);
        if (integer == 0)
        break;
        if ((integer % 2) == 0){
            evencount++;
            even[evencount]=integer;
        }else{
            oddcount++;
            odd[oddcount]=integer;
        }
        index++;
    }

    printf("%s, the %d numbers you entered are broken down as follows:\n", user_name,index);
    printf("%d odd integer(s):\n",oddcount);
    while (oddcount > 0){
    printf("%d\n",odd[oddcount]);
    oddcount--;
    }
    printf("%d even integer(s):\n",evencount);
    while (evencount > 0){
    printf("%d\n",even[evencount]);
    evencount--;
    }
    return 0;
}