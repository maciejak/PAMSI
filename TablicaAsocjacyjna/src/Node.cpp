//
// Created by maciek on 28.04.17.
//

#include "../inc/Node.hh"

Para::Para():war(0){
}

Para::Para(std::string Arg1, Wartosc Arg2) {
    war=Arg2;
    klucz_str=Arg1;
}

Para::~Para() {
    this->war=0;
}

Wartosc Para::WezWar(){
    return this->war;
}


std::string Para::WezKlucz_str() {
    return this->klucz_str;
}
