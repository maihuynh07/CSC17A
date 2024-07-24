
#ifndef DISCARDCARDS_H
#define DISCARDCARDS_H
#include "Helper.h"

template <class T>
class DiscardCards {
public:
    set<T> cards;           // save cards is discarded
    set<T> cardsPosition;   // save position of cards.
    int numberOfCards;      // save number of cards is discarded
    string label;           // save name of class for test
public:
    void setCards(set<T> cards){ this->cards = cards;}
    set<T> getCards(){ return this->cards;}
    void setCardsPosition(set<T> positions){ this->cardsPosition = positions;}
    set<T> getCardsPosition(){ return this->cardsPosition;};
    void setNumberOfCards(int number){
        this->numberOfCards = number;
    }
    int getNumberOfCards(){ return this->numberOfCards;};
    void setLabel(string label){ this->label = label;};
    string getLabel(){ return this->label;};
    void insertCard(T c){
        cards.insert(c);
    }
    void clearCard(){
        cards.clear();
    }
private:

};

#endif /* DISCARDCARDS_H */

