#include<stdio.h>
#include<string.h>

int main(void) {
    FILE *fp;
    fp = fopen("c/cat.c", "r+");

    int c;
    char l[] = "test\n";
    
    int i;

    for (i = 0; i < strlen(l); i++)
        putchar(l[i]);

    while ((c = getc(fp)) != EOF) {
            printf("%c", c);
        }

    putc('c', fp);
    rewind(fp);

    while ((c = getc(fp)) != EOF) {
            printf("%c", c);
        }
    
    fclose(fp);
    printf("\n");
}
