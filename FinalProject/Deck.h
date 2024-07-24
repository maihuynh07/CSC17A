#ifndef DECK_H
#define DECK_H
#include "Helper.h"
#include "Cards.h"
#include <deque>
#include <stack>
#include <iostream>
#include <set>
using namespace std;

class Deck: public Cards{
private:
    string deckLabel;
public:
    short status;
    short size;
    deque<card> cards;
    stack<card> disCardedCards; 
public:
    Deck();
    //void drawCard(); // draw card from deck, save to discardedCards
    //void resetDeck(set<card>&); // reset deck (deck is full size)
    //void showDeck(); // display deck card
    //virtual void drawCard();

    
    void reset(set<card>&) ;       // reset cards member
    virtual void showCards() const;   // print cards member
    virtual void showRole() const;   // print cards member
    void drawCard() ;    // save drawn card to disCardCards, and remove cards are drawn from cards member
};

#endif /* DECK_H */

