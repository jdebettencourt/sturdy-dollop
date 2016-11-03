#include <stdio.h>
#include <stdlib.h>

int main()
{


    srand(1951);
    int randv=rand();
    printf("base random value = %d\n", randv);
    
   //long magic[100];
   int a; 
   for( a = 2; a < 101; a = a + 1 ){
      int quotient = randv / a;
      int remain = randv % a;
      printf("value of a: %d quotient: %u remainder: %u\n", a, quotient, remain);
   }    
    
    int value100 = randv % 100;
    int div100i = randv /100;
    double div100n = randv / 100;
    double div100f = ((double) randv) / 100;
    printf("mod 100 result = %d\n randv = %d\n", value100, randv);
    printf(" integer division result = %d\n", div100i);
    printf(" std naive division result = %f\n", div100n);
    printf(" test float division result = %0.4f\n", div100f);
/*    
    int value30 = randv % 30;
    double div30n = randv / 30;
    double div30f = ((double) randv) /30;
    printf("mod 30 result = %d\n randv = %d\n", value30, randv);
    printf(" std naive division result = %f\n", div30n);
    printf(" test float division result = %0.4f\n", div30f);
    int value17 = randv % 17;
    double div17n = randv / 17;
    double div17f = ((double) randv) /17;
    printf("mod 17 result = %d\n randv = %d\n", value17, randv);
    printf(" std naive division result = %f\n", div17n);
    printf(" test float division result = %0.4f\n", div17f);
    int value10 = randv % 10;
    double div10n = randv / 10;
    double div10f = ((double) randv) /10;
    printf("mod 10 result = %d\n randv = %d\n", value10, randv);    
    printf(" std naive division result = %f\n", div10n);
    printf(" test float division result = %0.4f\n", div10f);
    int value7 = randv % 7;
    double div7n = randv / 7;
    double div7f = ((double) randv) /7;
    printf("mod 7 result = %d\n randv = %d\n", value7, randv);
    printf(" std naive division result = %f\n", div7n);
    printf(" test float division result = %0.4f\n", div7f);
    int value3 = randv % 3;
    double div3n = randv / 3;
    double div3f = ((double) randv) /3;
    printf("mod 3 result = %d\n randv = %d\n", value3, randv);
    printf(" std naive division result = %f\n", div3n);
    printf(" test float division result = %0.4f\n", div3f);
*/    
    return 0;
}