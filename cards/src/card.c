#include <stdio.h>
#include<stdbool.h>
#include "deck.h"
#include<stdlib.h>
#include<time.h>
#include "card.h"

struct card pick_a_card()
{
	int random_number;

	/* Use the current time as a seed */
	srand(time(NULL));
	random_number = rand() % 52 + 1;

	struct card picked_card;

	do {
		picked_card = deck[random_number];
		printf("picking\n");
	} while (picked_card.ispicked);

	picked_card.ispicked = true;

	return picked_card;

}
