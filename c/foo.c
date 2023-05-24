#include <stdio.h>

int main(void) {
    int a[10];
    int x = 1;

    a[7] = x;

    printf("%d\n", a[7]);
    return 0;
}

int function(int x, int z) {
	if (x > z) {
		return x;
	}
	return z;
}
