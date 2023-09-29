#include "Deck.h"
#include "Card.h"
#include <ctime>

Deck::Deck()
{
    int j;
	for(int j = 0; j < 52; j++){
		int num = (j % 13) + 2;
		suit su = suit(j / 13);
		this->card[j].set(num, su);
	}
}
void Deck::show_deck()
{
    for(int i = 0; i < 52; i++)
    {
        this->card[i].outputcard();
    }
}
void Deck::shuffle_card()
{
    srand(time(NULL));
	for(int j = 0; j < 52; j++){
		int k = rand() % 52 ;
		Card temp = this->card[j] ;
		this->card[j] = this->card[k] ;
		this->card[k] = temp ;
	}
}
