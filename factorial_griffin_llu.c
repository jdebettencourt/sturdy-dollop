/*
Factorial algorithm wrapped in a program


*/

#include <stdio.h>

/* Given n, compute n! = 1*2*...*n */
/* Warning: will overflow on 32-bit machines if n > 12 */
long long int
factorial(int n)
{
int i;
long long product;
if(n < 2) return n;
/* else */
product = 1;
for(i = 2; i <= n; i++) {
product *= i;
}
return product;
}

/*
Source:
Notes on Data Structures and Programming
Techniques (CPSC 223, Spring 2015)
James Aspnes
2015-04-29T08:59:08-0400
downloaded from: http://www.cs.yale.edu/homes/aspnes/classes/223/notes.pdf
*/

int main()
{
	   int a;

	   printf("Please input an integer value: ");
	   scanf("%d", &a);
	   printf("You entered: %d\n", a);


	printf("The value of %d! or %d factorial equals %llu\n", a, a, factorial(a));

    return 0;
}