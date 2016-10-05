#include <stdio.h>
#include <float.h>
#include <limits.h>


long double
factorial(int n)
{
int i;
long double product;
if(n < 2) return n;
/* else */
product = 1;
for(i = 2; i <= n; i++) {
product *= i;
}
return product;
}


int main(void)
{
   int a;

   printf("Please input an integer value: ");
   if (scanf("%d", &a) != 1) {
    printf("expected number\n");
    return 1;
    };
   printf("You entered: %d\n", a);

   printf("factorial of %d equals %Lf\n", a, factorial(a));

   return 0;
}