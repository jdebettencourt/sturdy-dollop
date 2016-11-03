#include <stdio.h>
#include <stdlib.h>

struct mu {
    unsigned int M; // Magic number,
    unsigned int a; // "add" indicator,
    unsigned int s;
    }; // and shift amount.

struct mu magicu(unsigned d) {
// Must have 1 <= d <= 2**32-1.
int p;
//d=100;
unsigned nc, delta, q1, r1, q2, r2;

struct mu magu;
magu.a = 0;// Initialize "add" indicator.
d=100;
nc = -1 - (-d)%d; // Unsigned arithmetic here.
p = 31; // Init. p.
q1 = 0x80000000/nc; // Init. q1 = 2**p/nc.
r1 = 0x80000000 - q1*nc;// Init. r1 = rem(2**p, nc).
q2 = 0x7FFFFFFF/d; // Init. q2 = (2**p - 1)/d.
r2 = 0x7FFFFFFF - q2*d; // Init. r2 = rem(2**p - 1, d).
do {
p = p + 1;
if (r1 >= nc - r1) {
q1 = 2*q1 + 1; // Update q1.
r1 = 2*r1 - nc;} // Update r1.
else {
q1 = 2*q1;
r1 = 2*r1;}
if (r2 + 1 >= d - r2) {
if (q2 >= 0x7FFFFFFF) magu.a = 1;
q2 = 2*q2 + 1; // Update q2.
r2 = 2*r2 + 1 - d;} // Update r2.
else {
if (q2 >= 0x80000000) magu.a = 1;
q2 = 2*q2;
r2 = 2*r2 + 1;}
delta = d - 1 - r2;
} while (p < 64 &&
(q1 < delta || (q1 == delta && r1 == 0)));
magu.M = q2 + 1; // Magic number
magu.s = p - 32; // and shift amount to return
return magu; // (magu.a was set above).
};

/*
#include <stdio.h>

struct xampl {
  int x;
};
*/

int main()
{  
    struct mu magic(); // magicstructure;
    //int *ptr[2];
    struct magic *ptr[2];
    //struct magic *ptr[2];
    //structure.x = 12;
    //ptr = &magic;
    ptr[0] = &magic.M;
    ptr[1] = &magic.a;
    ptr[2] = &magic.s;
    /* Yes, you need the & when dealing with 
    //                       structures and using pointers to them*/
    printf( "M %x\n", ptr[0]);//->magic.M );
    /* The -> acts somewhat like the * when 
                                   does when it is used with pointers
                                    It says, get whatever is at that memory
                                   address Not "get what that memory address
                                   is"*/
    printf( "a %x\n", ptr[1]);//->magic.a );
    printf( "s %x\n", ptr[2]);//->magic.s );
    //getchar();
    return 0;
}
