#include <stdio.h>

int main(void) {
	char a[] = "Hello";
	printf("%s\n", a);
	printf("%d\n", sizeof(a) / sizeof(a[0]));

	int x;

	x = 10 + (10 + (10 + (10 + 10)));

	printf("%d\n", x);
}
