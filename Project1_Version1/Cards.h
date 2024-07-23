#ifndef CARDS_H
#define CARDS_H

#include <set>
#include "Helper.h"
using namespace std;

class Cards {
public:
    Cards();
    //virtual void reset(set<card>&) const =0;       // reset cards member
    virtual void showCards() const=0;  // print cards member
    //virtual void drawCard() const=0;    // save drawn card to disCardCards, and remove cards are drawn from cards member
};

#endif /* CARDS_H */

