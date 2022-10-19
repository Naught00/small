#include<stdio.h>
#include<stdbool.h>
#include<unistd.h>


void cat(char s[], char t[]);

int main(int argc, char* argv[]) {
    char s[] = "hello ";
    char t[] = "world\n";
    printf("argc is %d\n", argc);
    printf("argv is %s\n", argv[2]);

    cat(s, t);
}

void cat(char s[], char t[]) {
    int i, j;

    i = j = 0;
    while(s[i] != '\0')
        i++;
    while ((s[i++] = t[j++]) != '\0')
        ;
    printf("%s\n", s);
    int x, y;
    x = 1;
    y = 2;
    if ((x = y) == 2)
        printf("test complete\n");
}
