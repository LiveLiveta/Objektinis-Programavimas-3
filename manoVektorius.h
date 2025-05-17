#ifndef FUNKCIJOS_H
#define FUNKCIJOS_H
#include <pagalbines.h>

template <typename elemento_tipas>
class Vektorius{

private:
    ElementoTipas* masyvas;
    size_t dydis;
    size_t talpa;
public:
    Vektorius();
    ~Vektorius();

    Vektorius(const Vektorius& pagrindinis); // Copy constructor
};


template <typename ElementoTipas>
Vektorius<ElementoTipas>::Vektorius(){
    talpa = 10;
    dydis = 0;
    masyvas = new ElementoTipas[talpa];
}

template <typename ElementoTipas>
Vektorius<ElementoTipas>::~Vektorius() {
    delete[] masyvas;
}

template <typename ElementoTipas>
Vektorius<ElementoTipas>::Vektorius(const Vektorius& pagrindinis){
    dydis = pagrindinis.dydis;
    talpa = pagrindinis.talpa;
    masyvas = new ElementoTipas[talpa];

    for (size_t i = 0; i < dydis; ++i) {
        masyvas[i] = pagrindinis.masyvas[i];
    }
}



#endif