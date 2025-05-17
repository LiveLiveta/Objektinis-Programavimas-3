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
    // The rule of five
    Vektorius();
    ~Vektorius();

    Vektorius(const Vektorius& pagrindinis); // Copy constructor
    Vektorius& operator=(const Vektorius& pagrindinis); // Copy assignment operator
    Vektorius(Vektorius&& pagrindinis) noexcept; // Move constructor
    Vektorius& operator=(Vektorius&& pagrindinis) noexcept; // Move assignment operator

    // getters
    size_t size() const;
    size_t capacity() const;
    
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

// Move assignment operator
template <typename ElementoTipas>
Vektorius<ElementoTipas>& Vektorius<ElementoTipas>::operator=(Vektorius&& pagrindinis) noexcept {
    if (this == &pagrindinis) return *this; // Self-assignment check

    delete[] masyvas; // Release the current memory

    masyvas = pagrindinis.masyvas; // Take ownership of the pagrindinis vector's data
    dydis = pagrindinis.dydis;
    talpa = pagrindinis.talpa;

    pagrindinis.masyvas = nullptr; // Reset the pagrindinis vector
    pagrindinis.dydis = 0;
    pagrindinis.talpa = 0;

    return *this;
}

template <typename ElementoTipas>
size_t Vektorius<ElementoTipas>::size() const {
    return dydis;
}

template <typename ElementoTipas>
size_t Vektorius<ElementoTipas>::capacity() const {
    return talpa;
}




#endif