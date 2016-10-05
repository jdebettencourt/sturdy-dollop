/* loop example http://warunapw.blogspot.com/2013/10/how-to-read-character-using-scanf-in.html */


#include <stdio.h>
 
int main(void) {
  int ch;
  do
  {
    printf("enter an int: ");
    scanf(" %d", &ch);
 
    printf("\nentered: %d\n", ch);
  } while(ch != 0);
 
  return 0;
}