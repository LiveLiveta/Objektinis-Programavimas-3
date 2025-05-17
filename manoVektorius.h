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


#endif