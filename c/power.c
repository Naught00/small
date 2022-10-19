#include<stdio.h>

void power(int m, int n);

int main() {
    int i;

    power(2,10);
    return 0;
}

void power(int m, int n) {
    int counter;
    int ans;
    ans = m;

    for (counter = 1; counter < n; ++counter) {
        ans = ans * m;
    }
    printf("%d\n", ans);

}

