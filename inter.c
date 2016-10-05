#include <stdio.h>
 
int main(void) {
  int ch;
  do
  {
    printf("enter an int not a char: ");
    scanf(" %d", &ch);
 
    printf("\nentered: %d\n", ch);
  } while(ch > 0);
 
  return 0;
}