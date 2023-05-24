#include<stdio.h>

/* this is a  block */
/* of text */
/* Hello. */

void print_table() {
    
   printf("Fahrenheit  Celcius\n");
}

int main() {
    print_table();
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper;
    while (fahr >= lower) {
        celcius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celcius);
        fahr = fahr - step;
    }
}
