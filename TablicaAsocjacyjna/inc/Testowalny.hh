//
// Created by maciek on 08.05.17.
//

#ifndef TESTOWALNY_HH
#define TESTOWALNY_HH

#include "zalaczniki.hh"

class Testowalny {
public:
    virtual void zbuduj(std::string,int wartosc,Wariant hasz)=0;
    virtual void zadanie(std::string)=0;
    virtual void reset()=0;
};


#endif //LAB7_TESTOWALNY_HH
