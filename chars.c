#include <stdio.h>
 
int main(void) {
  char ch;
  do
  {
    printf("enter a char: ");
    scanf(" %c", &ch);
 
    printf("\nentered: %c\n", ch);
  } while(ch != 'q');
 
  return 0;
}