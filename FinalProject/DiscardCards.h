
#ifndef DISCARDCARDS_H
#define DISCARDCARDS_H
#include "Helper.h"

template <class T>
class DiscardCards {
public:
    set<T> cards;  
public:
    void insertCard(T c){
        cards.insert(c);
    }
    void clearCard(){
        cards.clear();
    }
private:

};

#endif /* DISCARDCARDS_H */

