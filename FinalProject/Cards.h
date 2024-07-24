#ifndef CARDS_H
#define CARDS_H

#include <cstring>
#include "Helper.h"

using namespace std;

class Cards {
private:
    int numberOfCards;  // a number of cards
    string role;       // the label of type of cards (role = dealer, player)
    
public:
    Cards(int,string);
    void setNumberOfCards(int noc){ this->numberOfCards = noc;}; 
    int getNumberOfCards(){ return this->numberOfCards;}         
    void setRole(string role){  this->role = role;};
    string getRole() {return this->role;};
    //virtual void reset(set<card>&) const =0;       // reset cards member
    virtual void showCards() const = 0;  // print cards member
    virtual void showRole() const =0;    // print role
    //virtual void drawCard() const=0;   // save drawn card to disCardCards, and remove cards are drawn from cards member

    // overloaded operator << and >>
    friend ostream & operator << (ostream &out, const Cards &c)
    {
        out << c.role;
        out << "," << c.numberOfCards<< endl;
        return out;
    }

    friend istream & operator >> (istream &in,  Cards &c)
    {
        cout << "Enter role: ";
        in >> c.role;
        cout << "Enter number of cards: ";
        in >> c.numberOfCards;
        return in;
    }
};

#endif /* CARDS_H */

