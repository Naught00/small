#include<stdio.h>

int main(void) {
	int i, sum;
	printf("this is a test\n");

	for (i = 0, sum = 0; i < 10; i++, sum += i);

	printf("%d\n", sum);
	return;
}

int data(void) {
	printf("this is a thing");
}
