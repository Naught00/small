#include<stdio.h>
#include<string.h>

int main() {
    char s[] = "hello\n";
    char x = 'x';
    int i;
    printf("%lu, %s\n", strlen(s), s);
    for (i = 0; i <= 6; ++i)
        printf("%d\n", s[i]);
}
