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
    Vektorius& operator=(const Vektorius& pagrindinis); // Copy assignment operator
    Vektorius(Vektorius&& pagrindinis) noexcept; // Move constructor
    
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

// Copy assignment operator
template <typename ElementoTipas>
Vektorius<ElementoTipas>& Vektorius<ElementoTipas>::operator=(const Vektorius& pagrindinis) {
    if (this == &pagrindinis) return *this; // Self-assignment check

    delete[] masyvas; // Free existing memory

    dydis = pagrindinis.dydis;
    talpa = pagrindinis.talpa;
    masyvas = new ElementoTipas[talpa];

    for (size_t i = 0; i < dydis; ++i) {
        masyvas[i] = pagrindinis.masyvas[i];
    }

    return *this;
}

// Move constructor
template <typename ElementoTipas>
Vektorius<ElementoTipas>::Vektorius(Vektorius&& pagrindinis) noexcept {
    talpa = pagrindinis.talpa;
    dydis = pagrindinis.dydis;
    masyvas = pagrindinis.masyvas; //naujo masyvo rodykle yra pagrindinio rodykle.
    
    pagrindinis.masyvas = nullptr; // pagrindine rodykle neberodo i nieka.
    pagrindinis.dydis = 0;
    pagrindinis.talpa = 0;
}



#endif