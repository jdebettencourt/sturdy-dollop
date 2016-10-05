/* loop example http://warunapw.blogspot.com/2013/10/how-to-read-character-using-scanf-in.html */


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