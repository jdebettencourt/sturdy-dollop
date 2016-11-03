#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(1951);
    printf("seed equals %ll\n", (void *)srand(1951));
    int randv=rand();
    printf("base random value = %d\n", randv);
    
    int value100 = randv % 100;
    int div100i = randv /100;
    double div100n = randv / 100;
    double div100f = ((double) randv) / 100;
    double div100fd= randv /100.00;
    printf("mod 100 result = %d\n randv = %d\n", value100, randv);
    printf(" integer result for integer division = %d\n", div100i);
    printf(" naive float result for integer division = %f\n", div100n);
    printf(" float result for float in numerator division = %0.4f\n", div100f);
    printf(" float result for float in denominator division = %0.4f\n", div100fd);

    return 0;
}