//
// Created by maciek on 31.05.17.
//

#ifndef PROJEKT_PRZYSTANEK_HH
#define PROJEKT_PRZYSTANEK_HH


#include "Rozklad.hh"
#include <cmath>

class Przystanek {
private:
    int id;
    std::string nazwa;
    double lat;
    double lon;

    int ilosc_linii;
    int* numery_linii;
    Rozklad** TablicaPoszczegolnychRozkladow;

    std::list<Przystanek*> Sasiedzi;
    double koszt;
    double H;
    double G;
    Przystanek* rodzic;

public:
    //------konstruktory i destruktor---------
    Przystanek(const std::string &nazwa,int& idNowego);

    Przystanek(int id, const std::string &nazwa, double lat, double lon);

    Przystanek(const std::string &nazwa, int ilosc_linii, int *numery_linii, Rozklad **TablicaPoszczegolnychRozkladow);
    virtual ~Przystanek();
    //----------------------------------------


    //----metody get-------------------
    const std::string &getNazwa() const;
    int *getNumery_linii() const;
    int getId() const;

    double getLat() const;

    double getLon() const;

    double getKoszt() const;
    double getG() const;
    double getH() const;
    Przystanek *getRodzic() const;

    //---------------------------------

    Rozklad* ZnajdzLinie(int)const ;
    Rozklad* ZnajdzLinie(std::string)const;
    void WyliczKoszt(double szerokosc, double dlugosc);
    void DodajSasiada(Przystanek* Arg);
    void DodajRodzica(Przystanek *Rodzic);

};


#endif //PROJEKT_PRZYSTANEK_HH
