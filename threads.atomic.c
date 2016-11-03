#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>
#include "common.h"
#include "stdatomic.h"

atomic_int acounter;
int counter = 0;
int loops;

void *worker(void *arg) {
//    atomic_int acounter=0;

    int i;
    for (i = 0; i < loops; i++) {
	counter = counter + 1;
	atomic_fetch_add_explicit(&acounter, 1, memory_order_relaxed);
    }
    pthread_exit(NULL);
}

int main(int argc, char *argv[]) {
    if (argc != 2) { 
	fprintf(stderr, "usage: threads <loops>\n"); 
	exit(1); 
    } 
    loops = atoi(argv[1]);
    pthread_t p1, p2;
    printf("Initial value : %d\n", counter);
    Pthread_create(&p1, NULL, worker, NULL); 
    Pthread_create(&p2, NULL, worker, NULL);
    Pthread_join(p1, NULL);
    Pthread_join(p2, NULL);
    printf("\n Final value regl  : %d\n Final value atomic: %d\n", counter, acounter);
    return 0;
}

