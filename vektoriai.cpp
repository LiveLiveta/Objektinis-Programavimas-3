#include "pagalbines.h"
#include "funkcijos.h"

int studentu_kiekis = 0;
vector<string> vardai = { "Mantas", "Lukas", "Dominykas", "Kajus", "Dovydas", "Rokas", "Emilis", "Tadas", "Benas", "Jokubas"};
vector<string> pavardes ={ "Kazlauskas", "Petrauskas", "Jankauskas", "Baliunas", "Vaiciulis", "Stankevicius", "Jonaitis", "Urbonas", "Zabielskas", "Paulauskas"};
vector<Studentas> studentai;
vector<double> operaciju_laikai;
int operaciju_kiekis = 0;

int main(){
    studento_duomenu_gavimas(studentai);
    studento_duomenu_printinimas(studentai);

    // string vardas = "Jonas";
    // string pavarde = "Jonaitis";
    // vector<int> pazymiai = {10,7,8};
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
