/* Given n, compute n! = 1*2*...*n */
/* Warning: will overflow on 32-bit machines if n > 12 */
long long
factorial(int n)
{
    long long i;
    long long product;

    if(n < 2) return n;
    /* else */

    product = 1;

    for(i = 2; i <= n; i++) {
        product *= i;
    }

    return product;
}

int
main()
{

printf("the value of 50 factorial is %llu\n",(factorial(50)));

}