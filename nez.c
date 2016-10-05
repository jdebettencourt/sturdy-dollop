#include <stdio.h>


int
factorial(int n)
{
    int i;
    int product;

    if(n < 2) return n;
    /* else */

    product = 1;

    for(i = 2; i <= n; i++) {
        product *= i;
    }

    return product;
}

 
int main(void) {
  int ch;
  do
  {
    printf("enter an int not a char: ");
    scanf(" %d", &ch);
 
    printf("\nentered: %d  %d\n", ch, factorial(ch));
  } while(ch != 0);
 
  return 0;
}