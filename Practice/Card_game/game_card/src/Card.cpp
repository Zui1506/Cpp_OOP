#include "Card.h"
#include<iostream>
#include<iomanip>

using namespace std;
Card::Card(){}

Card::~Card(){}

void Card::outputcard()
{
    cout << setw(4);
	if(this->num >= 2 && this->num <= 10)
		cout << this->num;
	else{
		switch(this->num){
			case jack: cout << 'J'; break;
			case queen: cout << 'Q'; break;
			case king: cout << 'K'; break;
			case ace: cout << 'A'; break;
		}
	}
	switch(this->S){
		case clubs: cout << " of clubs"<<endl; break;
		case diamonds: cout << " of diamonds"<<endl; break;
		case hearts: cout << " of hearts"<<endl; break;
		case spades: cout << " of spades"<<endl; break;
	}
}
int Card::get_num()
{
    return this->num;
}
void Card::set(int number, suit a)
{
    this->num = number;
    this->S = a;
}
suit Card::get_suit()
{
    return this->S;
}
