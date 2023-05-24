#include <stdio.h>
#include <string.h>
int main(void) {
	int arr[10];
	int i;

	for (i = 0; i < 10; i++) {
		arr[i] = i;
	}
	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	int new[10];
	int j;
	for (i = 0, j = 9; i < 10; i++, j--) {
		new[i] = arr[j];
	}
	for (i = 0; i < 10; i++) {
		printf("%d\n", new[i]);
	}

	for (i = 0; i < 10; i++) {
	}


}
