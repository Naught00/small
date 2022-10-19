#include<stdbool.h>
#include "deck.h"
#include<stdbool.h>
#include <stdio.h>

struct card deck[52];

void shuffle_deck(void)
{
    int count, number;
    bool isface, isjoker;

    int face_count;

    for (count = 0, number = 1, face_count = 0; count < 52; count++, number++, face_count++) {

         if (face_count == 10) {
            struct card c = {number, true, false, false};
            deck[count] = c;
        } else if (face_count == 11) {
            struct card c = {number, true, false, false};
            deck[count] = c;
        } else if (face_count == 12) {
            struct card c = {number, true, false, false};
            deck[count] = c;
        } else if (face_count == 23) {
            struct card c = {number, true, false, false};
            deck[count] = c;
        } else if (face_count == 24) {
            struct card c = {number, true, false, false};
            deck[count] = c;
        } else if (face_count == 25) {
            struct card c = {number, true, false, false};
            deck[count] = c;
        } else if (face_count == 36) {
            struct card c = {number, true, false, false};
            deck[count] = c;
        } else if (face_count == 37) {
            struct card c = {number, true, false, false};
            deck[count] = c;
        } else if (face_count == 38) {
            struct card c = {number, true, false, false};
            deck[count] = c;
        } else if (face_count == 49) {
            struct card c = {number, true, false, false};
        } else if (face_count == 50) {
            struct card c = {number, true, false, false};
            deck[count] = c;
        } else if (face_count == 51) {
            struct card c = {number, true, false, false};
            deck[count] = c;
        // Is joker face ?
        } else if (face_count == 52) {
            struct card c = {number, true, true, false};
            deck[count] = c;
        } else if (number <= 10) {
            struct card c = {number, false, false, false};
            deck[count] = c;
            printf("%d\n", deck[count].number);
        }     


        if (number <= 10) 
            number = 1;
    }
} 
