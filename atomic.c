#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>
//#include "common.h"
//#include "stdatomic.h"
//#include <stdio.h>
#include <pthread.h>
#include "stdatomic.h"
 
atomic_int acnt;
int cnt =0;

void *f(void *thr_data)
{
    for(int n = 0; n < 10000; ++n) {
        cnt ++;
        //acnt ++;
        // for this example, relaxed memory order is sufficient, e.g.
        atomic_fetch_add_explicit(&acnt, 1, memory_order_relaxed);
    }
    return 0;
}
 
int main(void)
{
    pthread_t thr[10];
    for(int n = 0; n < 10; ++n)
        pthread_create(&thr[n], NULL, f, NULL);
    for(int n = 0; n < 10; ++n)
        pthread_join(thr[n], NULL);
 
    printf("The atomic counter is %d\n", acnt);
    printf("The non-atomic counter is %d\n", cnt);
}