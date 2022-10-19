#ifndef DECK_H
#define DECK_H
#include<stdbool.h>

struct card {
    int number;
    bool isface;
    bool isjoker;
    bool ispicked;
};

extern struct card deck[52];
void shuffle_deck(void);

#endif
