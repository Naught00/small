#include<stdio.h>

int main() {
    int n1, c;

    n1 = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++n1;
        printf("%d\n", n1);
    }
}
