#include "studentas.h"
#include "pagalbines.h"

void Studentas::vidurkio_skaiciavimas(){
    int pazymiu_suma = 0;
    int pazymiu_kiekis = pazymiai.size();

    if (pazymiu_kiekis == 0){
         vidurkis = 0.6 * egzamino_pazymys;
    } else{ 
        for (int j = 0; j < pazymiu_kiekis; j++){
          pazymiu_suma += pazymiai[j];
        }
        double pazymiu_vidurkis = pazymiu_suma * 1.0 / pazymiu_kiekis;
        vidurkis = 0.4 * pazymiu_vidurkis + 0.6 * egzamino_pazymys;
        vidurkis = round(vidurkis * 100) / 100;
    }
}

void Studentas::medianos_skaiciavimas(){
    int pazymiu_kiekis = pazymiai.size();
    
    if (pazymiu_kiekis == 0) {
        mediana = 0.6 * egzamino_pazymys;
    } else { 
        vector<int> laikini_pazymiai(pazymiai.begin(), pazymiai.end());
        sort(laikini_pazymiai.begin(), laikini_pazymiai.end());
    
        if (pazymiu_kiekis % 2 == 0) {
            mediana = (laikini_pazymiai[pazymiu_kiekis / 2] + laikini_pazymiai[pazymiu_kiekis / 2 - 1]) / 2.0;
        } else {
            mediana = laikini_pazymiai[pazymiu_kiekis / 2];
        }
    
        mediana = 0.4 * mediana + 0.6 * egzamino_pazymys;
    }
}

void Studentas::prisistatymas(){
    cout << "Mano vardas " << vardas << "Ir ji sudaro " << vardas.length() << "raides." << endl;
}

Studentas::Studentas() {}
Studentas::Studentas(string vardass, string pavardee, vector<int> pazymiaii, int egzamino_pazymyss) {
    vardas = vardass;
    pavarde = pavardee;
    pazymiai = pazymiaii;
    egzamino_pazymys = egzamino_pazymyss;
}

Studentas::Studentas(const Studentas& originalas){
    pavarde = originalas.pavarde;
    vardas = originalas.vardas;
    pazymiai = originalas.pazymiai;
    egzamino_pazymys = originalas.egzamino_pazymys;
    vidurkis = originalas.vidurkis;
    mediana = originalas.mediana;
}

Studentas& Studentas::operator=(const Studentas& originalas){
    if (this != &originalas) { // tikrinam ar nepriskiriam sau pačiam
        pavarde = originalas.pavarde;
        vardas = originalas.vardas;
        pazymiai = originalas.pazymiai;
        egzamino_pazymys = originalas.egzamino_pazymys;
        vidurkis = originalas.vidurkis;
        mediana = originalas.mediana;
    }
    return *this;
}

Studentas::Studentas(Studentas&& originalas) noexcept {
    pavarde = move(originalas.pavarde);
    vardas = move(originalas.vardas);
    pazymiai = move(originalas.pazymiai);
    egzamino_pazymys = originalas.egzamino_pazymys;
    vidurkis = originalas.vidurkis;
    mediana = originalas.mediana;

    originalas.egzamino_pazymys = 0;
    originalas.vidurkis = 0;
    originalas.mediana = 0;
}

Studentas& Studentas::operator=(Studentas&& originalas) noexcept {
    if (this != &originalas) {
        pavarde = move(originalas.pavarde);
        vardas = move(originalas.vardas);
        pazymiai = move(originalas.pazymiai);
        egzamino_pazymys = originalas.egzamino_pazymys;
        vidurkis = originalas.vidurkis;
        mediana = originalas.mediana;

        originalas.egzamino_pazymys = 0;
        originalas.vidurkis = 0;
        originalas.mediana = 0;
    }
    return *this;
}

ostream& operator<<(ostream& isvesties_vieta, const Studentas& studentas) {
    isvesties_vieta << studentas.vardas << " " << studentas.pavarde << " | Pazymiai: ";
    for (int pazimys : studentas.pazymiai) {
        isvesties_vieta << pazimys << " ";
    }
    isvesties_vieta << "| Egzaminas: " << studentas.egzamino_pazymys;
    isvesties_vieta << " | Vidurkis: " << studentas.vidurkis;
    isvesties_vieta << " | Mediana: " << studentas.mediana;
    return isvesties_vieta;
}

istream& operator>>(istream& isvesties_vieta, Studentas& studentas) {
    cout << "Iveskite varda: ";
    isvesties_vieta >> studentas.vardas;

    cout << "Iveskite pavarde: ";
    isvesties_vieta >> studentas.pavarde;

    cout << "Iveskite pazymiu kieki: ";
    int kiekis;
    isvesties_vieta >> kiekis;

    studentas.pazymiai.clear();
    cout << "Iveskite pazymius: ";
    for (int i = 0; i < kiekis; ++i) {
        int pazymys;
        isvesties_vieta >> pazymys;
        studentas.pazymiai.push_back(pazymys);
    }

    cout << "Iveskite egzamino pazymi: ";
    isvesties_vieta >> studentas.egzamino_pazymys;

    studentas.vidurkio_skaiciavimas();
    studentas.medianos_skaiciavimas();

    return isvesties_vieta;
}

Studentas::~Studentas() {
    vardas.clear();
    pavarde.clear();
    pazymiai.clear();
}
