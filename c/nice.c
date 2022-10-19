#include<stdio.h>

int main(void) {
    FILE *fp;
    fp = fopen("cat.c", "r");

    int c;
    int i = 1;

    while ((c = getc(fp)) != EOF)  {
        if (c == '\n') {
            putchar(c);
            printf("%d\t", i);
            i++;
        } else {
            putchar(c);
        }
    }
    
    fclose(fp);
}
