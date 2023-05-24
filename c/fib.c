#include <stdio.h>
#include <stdlib.h>

int fib(int n);

int main(void) {
	int i;

	char *string[30];

	for (i = 0; i < 10; i++) {
		sprintf(string[i], "%d", fib(i));
	}
}


int fib(int n) {
	int ans;
	switch (n) {
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
		default:
			break;

	}
	ans = fib(n - 1) + fib(n-2);

	return ans;
}
