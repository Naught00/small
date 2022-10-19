#include "operator.h"
#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int minus(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    return x / y;
}

int main()
{
	printf("%d\n%d\n%d\n%d\n", add(1, 2), minus(10, 5), multiply(10, 100), divide(100, 10));
}
