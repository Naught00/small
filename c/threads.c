#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* function to be run as a thread always must have the same signature:
   it has one void* parameter and returns void */
void *threadfunction(void *arg)
{
	for (;;);
	return 0;
}

int main(void)
{
	pthread_t thread[10];

	int i;
	for (i = 0; i < 9; i++) {
		pthread_create(&thread[i], NULL, threadfunction, NULL);
	}

	for (;;) ;
}
