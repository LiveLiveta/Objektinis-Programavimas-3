#include "pagalbines.h"
#include "funkcijos.h"
#include "manoVektorius.h"

int studentu_kiekis = 0;
Vektorius<string> vardai;
Vektorius<string> pavardes;
Vektorius<Studentas> studentai;
Vektorius<double> operaciju_laikai;
int operaciju_kiekis = 0;

int main(){

    vardai.push_back("Mantas");
    vardai.push_back("Lukas");
    vardai.push_back("Dominykas");
    vardai.push_back("Kajus");
    vardai.push_back("Dovydas");
    vardai.push_back("Rokas");
    vardai.push_back("Emilis");
    vardai.push_back("Tadas");
    vardai.push_back("Benas");
    vardai.push_back("Jokubas");

    pavardes.push_back("Kazlauskas");
    pavardes.push_back("Petrauskas");
    pavardes.push_back("Jankauskas");
    pavardes.push_back("Baliunas");
    pavardes.push_back("Vaiciulis");
    pavardes.push_back("Stankevicius");
    pavardes.push_back("Jonaitis");
    pavardes.push_back("Urbonas");
    pavardes.push_back("Zabielskas");
    pavardes.push_back("Paulauskas");


    studento_duomenu_gavimas(studentai);
    studento_duomenu_printinimas(studentai);

    // string vardas = "Jonas";
    // string pavarde = "Jonaitis";
    // Vektorius<int> pazymiai = {10,7,8};
    // int egzamino_pazymys = 9;

    // cout << "Testuojam konstruktoriu su parametrais" << endl;
    // Studentas studentas1(vardas, pavarde, pazymiai, egzamino_pazymys);
    // studentas1.vidurkio_skaiciavimas();
    // studentas1.medianos_skaiciavimas();
    // cout << studentas1 << endl;

    // cout << "Testuojam copy constructor" << endl;
    // Studentas studentas2(studentas1);
    // cout << studentas2 << endl;

    // cout << "Testuojam copy assignment" << endl;
    // Studentas studentas3;
    // studentas3 = studentas1;
    // cout << studentas3 << endl;

    // cout << "Testuojam move constructor" << endl;
    // Studentas studentas4(move(studentas1));
    // cout << "Sukuria ir perkelia i: " << studentas4 << endl;
    // cout << "Perkelta is: " << studentas1 << endl;

    // cout << "Testuojam move assignment" << endl;
    // Studentas studentas5;
    // studentas5 = move(studentas2);
    // cout << "Perkelta i: " << studentas5 << endl;
    // cout << "Perkelta is: " << studentas2 << endl;
   
    // cout << "Testuojam ivedima ir isvedima" << endl;
    // Studentas studentas6;
    // cin >> studentas6;
    // cout << studentas6 << endl;
    
    return 0;
}
