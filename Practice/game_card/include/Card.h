#ifndef CARD_H
#define CARD_H

enum suit {clubs, diamonds, hearts, spades};
int const jack = 11;
int const queen = 12;
int const king = 13;
int const ace = 14;

class Card
{
    private:
        suit S;
        int num;
    public:
        Card();
        virtual ~Card();
        void outputcard();
        int get_num();
        suit get_suit();
        void set(int,suit);
};

#endif // CARD_H
