#ifndef DECK_H
#define DECK_H
#include"Card.h"
#include<bits/stdc++.h>

class Deck
{
    private:
        Card card[52] ;
    public:
        Deck();
        void draw();
        void show_deck();
        void shuffle_card();
        void deal_card()

};

#endif // DECK_H
