#include<iostream>
#include"Card.h"
#include "Deck.h"

using namespace std;

int main()
{
    Deck a;
    int number = 0;
    cout<<"Truoc khi xao bai\n";
    a.show_deck();
    cout<<"----------------------------------------------------";
    a.shuffle_card();
    cout<<"\nSau khi xao bai\n";
    a.show_deck();
    return 0;
}
