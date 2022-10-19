#include <stdio.h>
#include<stdbool.h>
#include "card.h"
#include "deck.h"
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#define MAX_SCORE 21

void print_deck();

int main()
{
    int score = 0;
    shuffle_deck(); 
    print_deck();
    if (deck[11].isface)
       printf("11 is a face card\n");

    struct card picked_card;
    struct card picked_card2;

    picked_card = pick_a_card();
    sleep(1);
    picked_card2 = pick_a_card();

    score = picked_card.number + picked_card2.number;

    if (picked_card.isface)
        printf("It is a face card! It is worth 10\n");
    else
        printf("Your card's number is: %d\n", picked_card.number);

    if (picked_card2.isface)
        printf("It is a face card! It is worth 10\n");
    else
        printf("Your second card's number is: %d\n", picked_card2.number);

    int done = 0;
    char input_as_string[2];
    int input_as_int;
    while (!done) {

        picked_card = pick_a_card();

        printf("\nWould you like to\n 1. Hit\n 2. Stand\n:");
        scanf("%1s", input_as_string);
        printf("\n");

        input_as_int = atoi(input_as_string);

        if (input_as_int == 1) {
            printf("You chose hit\n");
            score = score + picked_card.number;
            printf("Your new card is %d\n", picked_card.number);
        } else if (input_as_int == 2) {
            printf("You chose stand\n");
            done = 1;
        } else {
            printf("Invalid input!\nPlease try again.\n");
            continue;
        }
    }

    printf("Your score is: %d\n", score);

    if (score > 21)
        printf("You lose!\n");
    else if (score == 21)
        printf("You win\n");
    else if (score < 21)
        printf("You were %d away from 21\n", (21 - score));

    return 0;
}

void print_deck()
{
    int i;

    for (i = 0; i <= 51; i++) {
        if (deck[i].isface)
            printf("face card!\n");
    }
}
