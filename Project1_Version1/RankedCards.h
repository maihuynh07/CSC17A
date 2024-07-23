/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   RankedCards.h
 * Author: maihu
 *
 * Created on July 23, 2024, 1:12 AM
 */

#ifndef RANKEDCARDS_H
#define RANKEDCARDS_H
#include <set>
#include <utility>
#include "Helper.h"

template <class T>
class RankedCards {
public:
    RankedCards(set<card>);
    RankedCards(const RankedCards& orig);
    virtual ~RankedCards();
    void rankCards();
private:
    set<card> rankedCards;
    bool operator()(const T&, const T&);
};

#endif /* RANKEDCARDS_H */

