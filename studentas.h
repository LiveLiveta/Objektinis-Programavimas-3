#include "pagalbines.h"

class Zmogus{
    public:
        virtual void prisistatymas() = 0; 
        virtual ~Zmogus() = default;
};

class Studentas : public Zmogus{
    public:
        string pavarde;
        string vardas;
        vector<int> pazymiai;
        int egzamino_pazymys;
        double vidurkis;
        double  mediana;

        Studentas(string vardass, string pavardee, vector<int> pazymiaii, int egzamino_pazymyss);
        Studentas(const Studentas& originalas);
        Studentas& operator=(const Studentas& originalas);
        Studentas(Studentas&& originalas) noexcept;
        Studentas& operator=(Studentas&& originalas) noexcept;
        Studentas();
        ~Studentas();
        friend ostream& operator<<(ostream& isvesties_vieta, const Studentas& studentas);
        friend istream& operator>>(istream& isvesties_vieta, Studentas& studentas);
        void prisistatymas() override;
        void vidurkio_skaiciavimas();
        void medianos_skaiciavimas();
};