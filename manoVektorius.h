#ifndef FUNKCIJOS_H
#define FUNKCIJOS_H
#include <pagalbines.h>

template <typename elemento_tipas>
class Vektorius{

private:
    ElementoTipas* masyvas;
    size_t dydis;
    size_t talpa;

    void reallocate(size_t naujaTalpa);

public:
    // The rule of five
    Vektorius();
    ~Vektorius();

    Vektorius(const Vektorius& pagrindinis); // Copy constructor
    Vektorius& operator=(const Vektorius& pagrindinis); // Copy assignment operator
    Vektorius(Vektorius&& pagrindinis) noexcept; // Move constructor
    Vektorius& operator=(Vektorius&& pagrindinis) noexcept; // Move assignment operator

    // operators
    ElementoTipas& operator[](size_t index);
    const ElementoTipas& operator[](size_t index) const;

    // getters
    size_t size() const;
    size_t capacity() const;

    // itterators
    ElementoTipas* begin() { return masyvas; }
    ElementoTipas* end() { return masyvas + dydis; }

        const ElementoTipas* begin() const { return masyvas; }
    const ElementoTipas* end() const { return masyvas + dydis; }

    ElementoTipas& front() { return masyvas[0]; }
    ElementoTipas& back()  { return masyvas[dydis - 1]; }

    const ElementoTipas& front() const { return masyvas[0]; }
    const ElementoTipas& back() const  { return masyvas[dydis - 1]; }


    void push_back(const ElementoTipas& elementas);
    void pop_back();
    bool empty() const { return dydis == 0; }
    ElementoTipas& at(size_t index);
    void clear();
    void shrink_to_fit();
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

template <typename ElementoTipas>
void Vektorius<ElementoTipas>::reallocate(size_t naujaTalpa) {
    ElementoTipas* newArray = new ElementoTipas[naujaTalpa];

    for (size_t i = 0; i < dydis; ++i) {
        newArray[i] = masyvas[i];
    }

    delete[] masyvas;

    masyvas = newArray;
    talpa = naujaTalpa;
}

template <typename ElementoTipas>
void Vektorius<ElementoTipas>::push_back(const ElementoTipas& elementas) {
    if(dydis == talpa)
    {
        reallocate(talpa * 2); // padvigubina dabartine talpa
    }

    masyvas[dydis] = elementas;
    ++dydis;
}


template <typename ElementoTipas>
void Vektorius<ElementoTipas>::pop_back() {
    if (dydis > 0) {
        --dydis;
    }
}

template <typename ElementoTipas>
ElementoTipas& Vektorius<ElementoTipas>::operator[](size_t index) {
    return masyvas[index];
}

template <typename ElementoTipas>
const ElementoTipas& Vektorius<ElementoTipas>::operator[](size_t index) const {
    return masyvas[index];
}

template <typename ElementoTipas>
ElementoTipas& Vektorius<ElementoTipas>::at(size_t index) {
    if (index >= dydis) {
        throw out_of_range("Index is out of range.");
    }

    return masyvas[index];
}


template <typename ElementoTipas>
void Vektorius<ElementoTipas>::clear() {
    if constexpr (!std::is_trivially_destructible<ElementoTipas>::value) {
        for (size_t i = 0; i < dydis; ++i) {
            masyvas[i].~ElementoTipas();  // aunaikina kiekviena elementa
        }
    }

    dydis = 0;
}

template <typename ElementoTipas>
void Vektorius<ElementoTipas>::shrink_to_fit() {
    if (dydis < talpa) {
        reallocate(dydis);
    }
}

#endif