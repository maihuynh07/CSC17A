/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   RankedCards.cpp
 * Author: maihu
 * 
 * Created on July 23, 2024, 1:12 AM
 */

#include "RankedCards.h"

RankedCards::RankedCards(set<card> cards) {
    this->rankedCards = cards;
}

RankedCards::RankedCards(const RankedCards& orig) {
}

RankedCards::~RankedCards() {
}

template <class T>
bool RankedCards<T>::operator()(const T& l, const T& r){
    if (l.second != r.second) {
        return l.second < r.second;
    }
    return l.first < r.first;
}

void RankedCards::rankCards(){
    
}