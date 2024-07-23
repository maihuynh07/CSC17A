/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Cards.h
 * Author: maihu
 *
 * Created on July 23, 2024, 2:19 PM
 */

#ifndef CARDS_H
#define CARDS_H

class Cards {
public:
    Cards();
    //virtual void reset(set<card>&) const =0;       // reset cards member
    virtual void showCards() const = 0;  // print cards member
    //virtual void drawCard() const=0;    // save drawn card to disCardCards, and remove cards are drawn from cards member
};

#endif /* CARDS_H */

